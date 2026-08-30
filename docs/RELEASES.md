# ClusterForge Release Policy

ClusterForge uses semantic-style version numbers while the project moves from MVP builds toward stable releases.

## Channels

### MVP / pre-release

Examples: `v0.1.0-mvp`, `v0.2.0-mvp`

These releases are intended for development, testing and evaluation. Interfaces, installation procedures, configuration formats and internal behavior may change between releases.

### Stable

Examples: `v1.0.0`, `v1.1.0`

A stable channel will only be used once the relevant public package has a documented upgrade path, repeatable tests and a supportable deployment model. ClusterForge has not reached this stage yet.

## Versioning

- **major** — incompatible public behavior or major architecture transition
- **minor** — new functionality that remains compatible with the current release line where practical
- **patch** — fixes, packaging corrections and documentation/release improvements
- **suffix** — development channel such as `-mvp`, when applicable

## Release requirements

A public binary release should have:

1. a reproducible CI build;
2. successful smoke tests for packaged binaries;
3. SHA-256 checksums;
4. a documented target platform;
5. release notes describing scope and limitations;
6. links to architecture, roadmap, changelog and security information.

## Windows worker package

The current public package targets Windows x86-64 and contains the worker/watchdog binaries plus installation, removal and testing material.

Future releases may publish additional platform artifacts when those components have equivalent automated build and test coverage.

## Security

A release may be replaced or followed by an expedited patch when a security issue materially affects a distributed package. See [SECURITY.md](../SECURITY.md) for reporting guidance.
