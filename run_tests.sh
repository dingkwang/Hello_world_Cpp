#!/bin/bash

echo "Building and running unit tests..."

# Build the tests
echo "Building tests..."
bazel build //test:math_utils_test

# Run the tests
echo "Running tests..."
bazel test //test:math_utils_test

# Run all tests
echo "Running all tests..."
bazel test //:tests

echo "Tests completed!"