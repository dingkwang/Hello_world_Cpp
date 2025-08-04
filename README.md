# C++ Project with Bazel

A C++ project using Bazel build system.

## Installation

Installed the latest bazel for linux:
```bash
curl -fLO "https://github.com/bazelbuild/bazel/releases/download/8.2.1/bazel-8.2.1-installer-linux-x86_64.sh"
```

## Building

To build the project:
```bash
bazel build //:hello_world
```

To run the project:
```bash
bazel run //:hello_world
```

## Contributing

### Creating Issues

This project uses GitHub issue templates to help organize and track development tasks. When creating a new issue, you can choose from the following templates:

1. **Add Unit Tests** - For tracking the addition of unit tests to existing functionality
2. **Bug Report** - For reporting bugs or issues
3. **Feature Request** - For suggesting new features or improvements

### Issue Templates

- **Add Unit Tests**: Use this template when you need to add unit tests for existing functionality. It includes specific checklists for setting up Google Test, creating test files, and integrating with the Bazel build system.

- **Bug Report**: Use this template to report bugs or issues. Include steps to reproduce, expected vs actual behavior, and environment details.

- **Feature Request**: Use this template to suggest new features or improvements. Include problem statements, proposed solutions, and implementation considerations.

## Project Structure

```
.
├── .github/ISSUE_TEMPLATE/  # Issue templates
├── BUILD.bazel              # Main build configuration
├── main.cpp                 # Main source file
├── WORKSPACE                # Bazel workspace configuration
└── README.md               # This file
```