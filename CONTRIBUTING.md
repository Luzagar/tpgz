# Contributing

We are grateful for any contributions from the community.
Here are some ways you can help the project:

## Reporting Issues

Before opening an issue, please search the [issue tracker](https://github.com/zsrtp/tpgz/issues) to make sure your issue hasn't already been reported.

### Bug Reports

Please do NOT submit bug reports about odd behavior caused by using the provided utilities to break the game.

Include the following in your report, with as much detail as possible:

- Steps to reproduce the issue.
- Expected behavior and observed behavior.

### Feature Requests

Please do NOT submit suggestions that are too subjective to be considered improvements.

Include the following in your request, with as much detail as possible:

- Detailed description of the proposed changes.
- How the changes will fit in with the current design.
- (Optional) Any info relevant to the feature's implementation.

## Development

We first recommend reading the [Dev Overview](./docs/DevOverview.md) to get an idea of how the project is setup.

Visit the [issue tracker](https://github.com/zsrtp/tpgz/issues) to find a list of open issues that need attention.

Fork, then clone the repo:

```
git clone https://github.com/your-username/tpgz.git
```

### Project structure

```
tpgz
├───.devcontainer         // Docker container environment files
├───.github
│   └───workflows         // github action(s) used to test code compilation
├───bin                   // binaries used in the compilation process
│   ├───gcn               // gcn specific binaries
│   └───wii               // wii specific binaries
├───cmake                 // cmake build rule files
├───common                // common files
├───docs                  // various documentation
├───external              // external libraries and programs consumed by tpgz
│   ├───fonts             // small rust program to generate raw bytes and c code for utilizing true-type fonts in game
│   │   ├───fonts         // ttf files
│   │   └───src           // source code for fonts
│   ├───gcn_c             // game independent gamecube apis to link to
│   │   ├───include       // header files for gcn_c
│   │   └───src           // source code for gcn_c
│   ├───libtp_c           // game bindings for twilight princess
│   |   ├───include       // header files for libtp_c
│   |   └───src           // source code for libtp_c
|   └───misc              // misc tools/scripts
├───isos                  // original game isos
├───modules               // tpgz module source code
│   ├───boot              // permanently loaded module source code
│   │   ├───include       // module header files
│   │   └───src           // module source code
│   ├───features          // feature-specific module source code
│   │   ├───include       // feature header files
│   │   └───src           // feature source code
│   ├───init              // tpgz initialization source code
│   │   ├───include       // initialization header files
│   │   └───src           // initialization source code
│   └───menu              // menu module source code
│       ├───include       // menu header files
│       └───src           // menu source code
├───res                   // external resources to be consumed
│   ├───bin               // region specific binary data
│   ├───fonts             // raw font data
│   ├───icons             // icon resources
│   ├───save_files        // practice file metadata and raw quest log bytes to be injected at compile time
│   ├───save_files_wii    // wii specific practice file metadata
|   ├───stage_info        // stage info data for warping menu
|   └───tex               // custom textures processed for tpgz
└───src                   // stub for compilation purposes
```

### Building

See [BUILDING.md](./BUILDING.md).

### Linting

Please format your files using the .clang-format file

Example clang-format usage (Ubuntu):

```bash
find . -type d \( -path ./external/gcn_c -o -path ./external/libtp_c -o \) -prune -false -o -regex '.*\.\(cpp\|hpp\|h\|cc\|cxx\)' -exec clang-format -style=file -i {} \;
```

### Sending a Pull Request

For non-trivial changes, you may want to open an issue with a proposal for a new feature before starting on the work.
We don't want you to waste your efforts on a pull request that won't be accepted.

In general, the contribution workflow looks like this:

- Open a new issue in the [Issue tracker](https://github.com/zsrtp/tpgz/issues).
- Fork the repo.
- Create a new feature branch based off the master branch.
- Submit a pull request, referencing any issues it addresses.

After you have submitted your pull request, we'll try to get back to you as soon as possible.
We may suggest some changes or improvements.

Thank you for contributing!
