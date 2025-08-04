# C++ Project with Bazel

A C++ project using Bazel build system with unit tests.

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

## Running Unit Tests

The project includes comprehensive unit tests using Google Test framework.

### Run All Tests
```bash
bazel test //:tests
```

### Run Specific Test
```bash
bazel test //test:math_utils_test
```

### Build Tests Only
```bash
bazel build //test:math_utils_test
```

### Using the Test Script
```bash
./run_tests.sh
```

## Test Coverage

The unit tests cover:
- Basic arithmetic operations (`add` function)
- Float comparison with tolerance (`float_equals` function)
- Edge cases (large numbers, small numbers, zero)
- Negative number handling
- Custom tolerance settings

## Project Structure

```
.
├── .github/ISSUE_TEMPLATE/  # Issue templates
├── src/                     # Source code
│   ├── math_utils.h        # Math utilities header
│   ├── math_utils.cpp      # Math utilities implementation
│   └── BUILD.bazel         # Source build configuration
├── test/                   # Unit tests
│   ├── math_utils_test.cpp # Math utilities tests
│   └── BUILD.bazel         # Test build configuration
├── BUILD.bazel             # Main build configuration
├── main.cpp                # Main source file
├── WORKSPACE               # Bazel workspace configuration
├── run_tests.sh            # Test execution script
└── README.md               # This file
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