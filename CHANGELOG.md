# Changelog

Notable public ClusterForge changes are documented here. The project is still in MVP development, so versions before a stable release may include breaking changes.

## Unreleased

### Project presentation

- added the ClusterForge vector logo and compact project mark
- added Apache License 2.0 and project notice
- expanded the README with release verification, support, license and installation links
- added release/versioning policy and Windows worker installation documentation
- added support, code-of-conduct, ownership and repository maintenance files

### Release engineering

- future releases publish a SHA-256 checksum for the downloadable ZIP
- future release pages use structured documentation instead of a generic generated changelog
- added GitHub generated-release categories
- added an automatic post-merge refresh for the `v0.1.0-mvp` release page
- added monthly GitHub Actions dependency update checks

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

The repository documents the broader ClusterForge MVP direction, including the controller/worker architecture, browser-based management, heterogeneous Windows/Linux nodes, resource-aware workload management, reliability work and planned AI/compute orchestration.

### Stability

This release is explicitly an MVP pre-release and is not presented as production-ready. APIs, installation procedures and internal formats may change before a stable release.
