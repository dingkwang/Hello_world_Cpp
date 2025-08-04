# Minimal WORKSPACE for hello world C++ Bazel project 

workspace(name = "bazel_hello_world")

# Google Test dependency
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "com_google_googletest",
    urls = ["https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip"],
    strip_prefix = "googletest-1.14.0",
) 