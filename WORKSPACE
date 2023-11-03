workspace(name = "bazel-opencv")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

all_content = """filegroup(
    name = "all",
    srcs = glob(["**"]),
    visibility = ["//visibility:public"]
)
"""

http_archive(
    name = "rules_foreign_cc",
    sha256 = "2a4d07cd64b0719b39a7c12218a3e507672b82a97b98c6a89d38565894cf7c51",
    strip_prefix = "rules_foreign_cc-0.9.0",
    url = "https://github.com/bazelbuild/rules_foreign_cc/archive/refs/tags/0.9.0.tar.gz",
)

load("@rules_foreign_cc//foreign_cc:repositories.bzl", "rules_foreign_cc_dependencies")

rules_foreign_cc_dependencies()

http_archive(
    name = "opencv",
    build_file = "//bzl:opencv.BUILD",
    sha256 = "db6fb5e7dc76829d738fdbcdba11a810c66ca0a4752e531eaf3d793361e96de8",
    strip_prefix = "opencv-4.7.0",
    urls = [
        "https://github.com/opencv/opencv/archive/4.7.0.zip",
    ],
)
