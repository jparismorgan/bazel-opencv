[![Build status](https://github.com/jparismorgan/bazel-opencv/actions/workflows/ci.yaml/badge.svg?branch=main)](https://github.com/jparismorgan/bazel-opencv/actions/workflows/ci.yaml)

### Build OpenCV C++ with Bazel on an M2 Mac
This is a sample project to build C++ OpenCV 4.X with Bazel on an M2 Mac.

It is based on this thread, with small modifications: https://stackoverflow.com/questions/76777350/building-opencv-with-rules-foreign-cc

### Versions
- Bazel 6.1.2
- OpenCV 4.7.0
- M2 Mac

### Running
- First run: `brew install ffmpeg`
- Then you can build OpenCV: `bazel build @opencv//:opencv-foo`
- And you can run a small test program: `bazel run //app:hello-opencv`

### Contributing
Please feel free to open up PR's or issues with suggestions or improvements.