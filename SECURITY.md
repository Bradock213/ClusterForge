# Security Policy

ClusterForge is currently an early-stage MVP. Security reports are welcome and should be handled carefully because the project coordinates remote machines and workloads.

## Supported versions

| Version | Security status |
|---|---|
| Latest MVP/pre-release | Best-effort security fixes |
| Older MVP builds | Upgrade to the newest available build |
| Stable release line | Not available yet |

ClusterForge has not reached a long-term-support release line. A security fix may require upgrading to a newer MVP build instead of receiving a backport.

## Reporting a security issue

Please **do not open a public GitHub issue** for vulnerabilities that could expose credentials, pairing secrets, remote execution paths, private infrastructure details or other sensitive information.

Until a dedicated private disclosure channel is published, contact the repository owner privately through the contact methods available on the GitHub profile and include only the minimum information needed to establish contact. Do not post secrets or exploit details publicly.

A useful report should include:

- affected component and version/commit
- environment and operating system
- clear reproduction steps
- expected versus observed behavior
- realistic impact
- suggested mitigation, if known

## Security-sensitive areas

Extra care is appropriate around:

- controller/worker authentication and pairing
- workload command delivery
- remote process execution
- file transfer and provisioning
- credentials and API tokens
- updater/install/uninstall behavior
- watchdog/recovery behavior
- network exposure and access control

## Sensitive data

Never commit or publish:

- API keys or tokens
- passwords
- node pairing secrets
- private SSH keys
- cloud credentials
- unnecessary private network details
- production logs containing secrets or personal data

## Public release scope

The public `v0.1.0-mvp` release contains the Windows x86-64 worker/watchdog package. Other parts of the platform remain under active development and may not yet have a stable public support policy.

## Release verification

Public binary releases should be built through repository CI and include SHA-256 verification material. See [docs/RELEASES.md](docs/RELEASES.md) for the release policy.
