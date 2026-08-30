# ClusterForge Roadmap

ClusterForge is currently in an MVP stage. This roadmap describes the intended technical direction and is not a promise of delivery dates.

## Current MVP

The current implementation focuses on the control-plane foundation required to operate heterogeneous Windows and Linux nodes:

- controller / worker architecture
- browser-based dashboard
- authenticated node pairing
- node health and hardware metrics
- generic workload lifecycle management
- resource-aware scheduling and node selection
- workload logs and status reporting
- watchdog recovery for ClusterForge services
- file transfer and provisioning workflows
- synchronization / failover-related lifecycle logic
- native Windows x86-64 worker and watchdog build pipeline

## Next: deployment and reliability

- simplify controller and worker installation
- improve diagnostics and error reporting
- expand automated integration and multi-node tests
- strengthen command delivery, idempotency and recovery behavior
- improve synchronization and controlled failover for stateful workloads
- document backup and restore procedures
- publish reproducible versioned builds

## Next: cloud and container workloads

- Docker/container workload support
- reusable workload templates and profiles
- improved resource limits and scheduling policies
- cloud-hosted controller deployment reference
- remote worker onboarding across different networks
- storage and artifact management improvements

## Next: AI / compute orchestration

- standardized AI/compute workload definitions
- CPU/GPU capability detection and scheduling
- queueing and resource-aware placement
- workload observability and historical metrics
- multi-node compute experiments
- APIs for external automation and integrations

## Longer-term

- stable public API
- role-based access improvements
- multi-controller/high-availability research
- richer audit and observability tooling
- documented extension model
- production-hardening and security review

## Project principles

ClusterForge should remain understandable and operable on ordinary heterogeneous hardware. Reliability, explicit state transitions and safe workload recovery take priority over opaque automation.
