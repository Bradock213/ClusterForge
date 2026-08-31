#include "scheduler.hpp"
#include <cassert>
#include <iostream>

int main() {
    using namespace cf;
    NodeRecord intel;
    intel.id = "intel";
    intel.label = "Intel";
    intel.role = NodeRole::AutomaticWorker;
    intel.last_seen = unix_seconds();
    intel.static_info.logical_threads = 12;
    intel.static_info.physical_cores = 10;
    intel.static_info.ram_total_mb = 8192;
    intel.metrics.cpu_usage_percent = 12.0;
    intel.metrics.ram_available_mb = 6200;
    intel.metrics.disk_free_mb = 250000;
    intel.metrics.controller_latency_ms = 20;
    intel.metrics.on_ac_power = true;

    NodeRecord amd = intel;
    amd.id = "amd";
    amd.label = "AMD";
    amd.static_info.logical_threads = 8;
    amd.static_info.physical_cores = 4;
    amd.metrics.cpu_usage_percent = 50.0;
    amd.metrics.ram_available_mb = 5000;

    SchedulerRequest request;
    request.profile = "minecraft";
    request.ram_mb = 4096;
    request.cpu_threads = 4;
    request.storage_mb = 20000;

    Scheduler scheduler("off");
    const auto winner = scheduler.recommend({amd, intel}, request);
    assert(winner.has_value());
    assert(winner->node_id == "intel");

    amd.metrics.ram_available_mb = 1000;
    const auto scores = scheduler.score_nodes({amd, intel}, request);
    assert(!scores.empty());
    assert(scores.front().node_id == "intel");

    intel.role = NodeRole::ControllerManual;
    request.include_manual_nodes = false;
    request.include_controller_node = false;
    assert(!scheduler.recommend({intel}, request).has_value());

    request.include_manual_nodes = true;
    request.include_controller_node = true;
    assert(scheduler.recommend({intel}, request).has_value());

    std::cout << "Scheduler tests passed\n";
    return 0;
}
