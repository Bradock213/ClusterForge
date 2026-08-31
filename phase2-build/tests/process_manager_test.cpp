#include "process_manager.hpp"

#include <chrono>
#include <filesystem>
#include <iostream>
#include <thread>

int main() {
    using namespace cf;
    const auto root = std::filesystem::temp_directory_path() / ("clusterforge-process-test-" + random_hex(5));
    std::filesystem::create_directories(root);

    ProcessManager manager;
    std::string error;
    ProcessLaunchSpec short_job;
    short_job.id = "short";
#ifdef _WIN32
    short_job.command = "powershell -NoProfile -Command \"Write-Output phase2-ok\"";
#else
    short_job.command = "printf 'phase2-ok\\n'";
#endif
    short_job.working_directory = root / "short";
    short_job.log_file = short_job.working_directory / "console.log";
    short_job.graceful_stop.clear();
    if (!manager.start(short_job, error)) {
        std::cerr << "short start failed: " << error << '\n'; return 1;
    }
    bool exited = false;
    for (int i = 0; i < 100; ++i) {
        auto snapshot = manager.snapshot("short");
        if (snapshot && snapshot->state == "exited") { exited = true; break; }
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }
    if (!exited || read_file_tail(short_job.log_file).find("phase2-ok") == std::string::npos) {
        std::cerr << "short job output/exit test failed\n"; return 2;
    }

    ProcessLaunchSpec long_job;
    long_job.id = "long";
#ifdef _WIN32
    long_job.command = "powershell -NoProfile -Command \"Start-Sleep -Seconds 30\"";
#else
    long_job.command = "sleep 30";
#endif
    long_job.working_directory = root / "long";
    long_job.log_file = long_job.working_directory / "console.log";
    long_job.graceful_stop.clear();
    if (!manager.start(long_job, error)) {
        std::cerr << "long start failed: " << error << '\n'; return 3;
    }
    if (!manager.stop("long", "", 3, error)) {
        std::cerr << "long stop failed: " << error << '\n'; return 4;
    }
    auto stopped = manager.snapshot("long");
    if (!stopped || stopped->state == "running") {
        std::cerr << "long job is still running\n"; return 5;
    }

    std::error_code ec;
    std::filesystem::remove_all(root, ec);
    std::cout << "Process manager tests passed\n";
    return 0;
}
