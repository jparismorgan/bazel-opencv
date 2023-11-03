// Paris Morgan, 2023
//
// Hello world example. Example Usage:
//   - bazel run //app:hello-opencv

#include <iostream>
#include <opencv2/core/core.hpp>
#include "opencv2/imgproc.hpp"

using namespace cv;

int main() {
  Mat M(2, 2, CV_8UC3, Scalar(0, 0, 255));
  std::cout << M << std::endl;
  printf("Done.\n");
  return 0;
}