# Changelog

Notable public ClusterForge changes are documented here. The project is still in MVP development, so versions before a stable release may include breaking changes.

## v0.1.0-mvp — 2026-08-30

First public MVP release package for the native Windows x86-64 worker/watchdog.

### Included in the release package

- `ClusterForgeWorker.exe`
- `ClusterForgeWatchdog.exe`
- worker install and uninstall PowerShell scripts
- testing documentation
- SHA-256 checksums

### Release pipeline

The package is built through GitHub Actions. The workflow reconstructs the native build input, compiles the binaries, runs smoke tests, generates checksums and publishes the resulting ZIP as a GitHub pre-release.

### Project documentation

The repository now documents the broader ClusterForge MVP direction, including the controller/worker architecture, browser-based management, heterogeneous Windows/Linux nodes, resource-aware workload management, reliability work and planned AI/compute orchestration.

### Stability

This release is explicitly an MVP pre-release and is not presented as production-ready. APIs, installation procedures and internal formats may change before a stable release.
