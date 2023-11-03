load("@rules_cc//cc:defs.bzl", "cc_library")
load("@rules_foreign_cc//foreign_cc:defs.bzl", "cmake")

filegroup(
    name = "opencv_srcs",
    srcs = glob([
        "**",
    ]),
)

cc_library(
    name = "opencv_deps",
    linkopts = [
        "-ldl",
        "-lz",
        "-lpthread",
        "-lavutil",
        "-lavformat",
        "-lavcodec",
        "-lswscale",
        "-L/opt/homebrew/lib",
        "-framework Cocoa",
        "-framework Accelerate",
        # NOTE(paris): These were all mentioned on Stack Overflow (https://stackoverflow.com/a/76795829/4979029), but I did not need them.
        # "-ldc1394",
        # "-L/opt/homebrew/opt/ffmpeg/lib", 
        # "-L/opt/X11/lib", 
    ],
)

cmake(
    name = "opencv",
    build_args = [
        "-j16",
    ],
    cache_entries = {
        "OPENCV_FORCE_3RDPARTY_BUILD": "ON",
        "BUILD_SHARED_LIBS": "OFF",
        "BUILD_TESTS": "OFF",
        "BUILD_PERF_TESTS": "OFF",
        "BUILD_opencv_apps": "OFF",
        "BUILD_opencv_calib3d": "OFF",
        "BUILD_opencv_core": "ON",
        "BUILD_opencv_dnn": "OFF",
        "BUILD_opencv_features2d": "OFF",
        "BUILD_opencv_flann": "OFF",
        "BUILD_opencv_gapi": "OFF",
        "BUILD_opencv_highgui": "ON",
        "BUILD_opencv_imgcodecs": "ON",
        "BUILD_opencv_imgproc": "ON",
        "BUILD_opencv_java_bindings_generator": "OFF",
        "BUILD_opencv_js": "OFF",
        "BUILD_opencv_ml": "OFF",
        "BUILD_opencv_objdetect": "OFF",
        "BUILD_opencv_photo": "OFF",
        "BUILD_opencv_python_bindings_generator": "OFF",
        "BUILD_opencv_stitching": "OFF",
        "BUILD_opencv_ts": "OFF",
        "BUILD_opencv_video": "OFF",
        "BUILD_opencv_videoio": "ON",
        "BUILD_opencv_world": "ON",
        "BUILD_IPP_IW": "ON",
        "WITH_ADE": "OFF",
        "WITH_CAROTENE": "OFF",
        "WITH_IPP": "OFF",
        "WITH_ITT": "ON",
        "WITH_OPENEXR": "OFF",
        "WITH_JASPER": "OFF",
        "WITH_JPEG": "OFF",
        "WITH_OPENJPEG": "ON",
        "WITH_TIFF": "OFF",
        "WITH_WEBP": "ON",
        "WITH_QUIRC": "ON",
        "WITH_GTK": "OFF",
        "WITH_OPENCL": "OFF"
    },
    env = {
        "CMAKE_BUILD_TYPE": "Release",
        "CMAKE_BUILD_PARALLEL_LEVEL": "16",
    },
    lib_source = ":opencv_srcs",
    out_include_dir = "include/opencv4",
    out_static_libs = [
        "libopencv_world.a",
        "opencv4/3rdparty/libittnotify.a",
        "opencv4/3rdparty/liblibopenjp2.a",
        "opencv4/3rdparty/liblibwebp.a",
        "opencv4/3rdparty/liblibpng.a",
    ],
    targets = [
        "install",
    ],
    visibility = [
        "//visibility:public"
    ],
    deps = [
        ":opencv_deps"
    ],
)
