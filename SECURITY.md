# Security Policy

ClusterForge is currently an early-stage MVP. Security reports are still welcome and should be handled carefully because the project coordinates remote machines and workloads.

## Reporting a security issue

Please **do not open a public GitHub issue** for vulnerabilities that could expose credentials, pairing secrets, remote execution paths, private infrastructure details or other sensitive information.

Until a dedicated private disclosure channel is published, contact the repository owner privately through the contact methods available on the GitHub profile and include only the minimum information needed to establish contact. Do not post secrets or exploit details publicly.

A useful report should include:

- affected component or version
- environment and operating system
- clear reproduction steps
- expected versus observed behavior
- realistic impact
- suggested mitigation, if known

## Sensitive data

Never commit or publish:

- API keys or tokens
- passwords
- node pairing secrets
- private SSH keys
- cloud credentials
- private network details that are not required for a public report
- production logs containing secrets or personal data

## Supported versions

ClusterForge has not reached a stable release line yet. The current public MVP is experimental and security fixes may require upgrading to the newest available build rather than receiving long-term patches for older MVP builds.

## Scope

The public `v0.1.0-mvp` release includes the Windows x86-64 worker/watchdog package. Other parts of the platform remain under active development and may not yet have a stable public support policy.
