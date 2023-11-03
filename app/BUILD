load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "hello",
    srcs = [
        "hello.cc",
    ],
)

cc_binary(
    name = "hello-opencv",
    srcs = [
        "hello-opencv.cc",
    ],
    deps = [
        "@opencv//:opencv",
    ],
)
