# Windows binaries required for building python-xmlsec

This repository stores its third-party libraries as Git submodules. Directories such as `xmlsec`, `libxml2`, and `openssl` are separate repositories pinned to specific commits.

The bundled artifact versions are also hard coded in `.github/workflows/windows.yml`, so changing a submodule tag is a two-part update:

1. Move the submodule to the new tag or commit.
2. Update the matching version string in the workflow.

## Inspect Current Versions

Show the pinned submodule commits and their nearby tags:

```bash
git submodule status
```

Show the current tag for one submodule:

```bash
git -C xmlsec describe --tags --always
```

## Update A Submodule

Example: bump `xmlsec` to a newer upstream tag.

Fetch tags in the submodule:

```bash
git -C xmlsec fetch --tags
```

List available tags:

```bash
git -C xmlsec tag -l 'xmlsec_*' --sort=-v:refname | head
```

Check out the target tag:

```bash
git -C xmlsec checkout xmlsec_1_3_8
```

Record the new submodule pointer in the parent repository:

```bash
git add xmlsec
```

Then update the matching version string in `.github/workflows/windows.yml`:

```powershell
$xmlsecVer = "1.3.8"
```

Commit both changes together:

```bash
git add .github/workflows/windows.yml
git commit -m "Bump xmlsec to xmlsec_1_3_8"
```

The same pattern applies to the other submodules. For example:

```bash
git -C libxml2 fetch --tags
git -C libxml2 checkout libxml2-2.12.10-1

git -C openssl fetch --tags
git -C openssl checkout openssl-3.0.17
```

After changing any submodule tag, update the corresponding version string in `.github/workflows/windows.yml` so the artifact names still match the actual library version.

## Notes

- Prefer checking out explicit release tags or commits instead of using `git submodule update --remote`, since this repository is maintained with pinned versions.
- `git add <submodule>` in the parent repository does not add the submodule files. It records the new submodule commit pointer.

## Acknowledgements

This work was made possible by https://github.com/winlibs!
