#ifndef __imageloader
#define __imageloader

#include <opencv2/core/core.hpp>
#include <string>

namespace esrocos_tutorials {
  
  class Image_Loader {
  
  public:
    cv::Mat* LoadImage(const std::string &);
  };
}

#endif
