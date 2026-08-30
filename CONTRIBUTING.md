# Contributing to ClusterForge

ClusterForge is currently a solo-developed MVP. Contributions are welcome when they are focused, reviewable and easy to verify.

By submitting a contribution for inclusion in ClusterForge, you agree that it may be distributed under the repository's **Apache License 2.0**.

## Before opening a pull request

1. Check existing issues and pull requests to avoid duplicating work.
2. For larger changes, open a feature request first and describe the problem you want to solve.
3. Keep changes scoped to one clear purpose.
4. Never include credentials, API keys, private infrastructure data or pairing secrets.
5. Follow the expectations in [CODE_OF_CONDUCT.md](CODE_OF_CONDUCT.md).

## Bug reports

A useful bug report includes:

- ClusterForge version or commit
- operating system and architecture
- affected component
- exact reproduction steps
- expected behavior
- actual behavior
- relevant sanitized logs

For security-sensitive bugs, follow [SECURITY.md](SECURITY.md) instead of opening a public issue.

## Pull requests

Pull requests should:

- explain the problem and the chosen solution
- avoid unrelated formatting or refactoring changes
- include tests or reproducible verification where practical
- preserve Windows/Linux compatibility when touching shared behavior
- update documentation when behavior changes
- keep generated binaries and secrets out of ordinary source commits

## Windows worker CI

The repository includes GitHub Actions that reconstruct and build the native Windows worker/watchdog package, run smoke tests and package the output.

A pull request that changes the Windows worker build inputs should leave this workflow green before merge.

## Releases

Changes intended for a public release should follow [docs/RELEASES.md](docs/RELEASES.md). Public binary releases should have an automated build, tests, checksums, platform scope and release notes.

## Project direction

Please review [ROADMAP.md](ROADMAP.md) before proposing broad architectural changes. Current priorities are reliability, observability, multi-node testing, container workloads and AI/compute orchestration.

## Project maturity

ClusterForge has not reached a stable API or production release. Internal formats and deployment procedures may still change significantly during MVP development.
