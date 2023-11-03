### What
Builds OpenCV 4.x with Bazel.

Based on this thread (with some small modifications): https://stackoverflow.com/questions/76777350/building-opencv-with-rules-foreign-cc

### Supported Platforms
This has only been tested on an M2 Mac.

### Running
- (first time) `brew install ffmpeg`
- `bazel build @opencv//:opencv-foo`
- `bazel run //app:hello-opencv`

### Contributing
Please feel free to open up PR's or issues with suggestions or improvements.