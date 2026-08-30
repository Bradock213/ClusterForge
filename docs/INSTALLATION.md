# ClusterForge Installation Notes

This document describes the **current public Windows worker MVP package**. It is not a complete production deployment guide for the entire ClusterForge platform.

## Requirements

- Windows x86-64
- PowerShell
- administrative rights if required by the installation script
- a machine and network environment you control

## Download

Use the latest appropriate package from [GitHub Releases](https://github.com/Bradock213/ClusterForge/releases).

For the first public MVP release:

- release: `v0.1.0-mvp`
- package: `ClusterForge-Windows-Worker-x64.zip`

## Verify the package

Future releases publish `SHA256SUMS.txt` alongside the ZIP. Verify the downloaded package with:

```powershell
Get-FileHash .\ClusterForge-Windows-Worker-x64.zip -Algorithm SHA256
```

Compare the output with the checksum published on the release page.

The current package also contains `SHA256.txt` for its worker/watchdog executables.

## Inspect before running

1. Extract the ZIP.
2. Read `TESTING.txt`.
3. Review `install-worker.ps1`.
4. Review the executable hashes.
5. Only install on a system you are authorized to manage.

## Install

From an elevated PowerShell session, run the bundled installation script only after reviewing it:

```powershell
Set-Location .\ClusterForge-Windows-Worker-x64
.\install-worker.ps1
```

The exact MVP installer behavior is defined by the script included with the release. Because ClusterForge is still under active development, installation paths and configuration procedures may change before a stable release.

## Uninstall

Use the bundled removal helper after reviewing it:

```powershell
.\uninstall-worker.ps1
```

## Troubleshooting

When reporting an issue, include:

- ClusterForge release or commit
- Windows version
- CPU architecture
- affected component
- sanitized logs
- exact reproduction steps

See [SUPPORT.md](../SUPPORT.md) for support expectations and [SECURITY.md](../SECURITY.md) for sensitive reports.
