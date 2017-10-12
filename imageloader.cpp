#include "imageloader.h"
#include <iostream>
#include <opencv2/highgui/highgui.hpp>

namespace esrocos_tutorials {
  
  cv::Mat* Image_Loader::LoadImage(const std::string & imageName){
  
    cv::Mat tmp = cv::imread(imageName, CV_LOAD_IMAGE_COLOR);

    if(! tmp.data ) {
      std::cout <<  "Could not open or find the image" << std::endl;
       
      return 0;
    }
    
    cv::Mat* image = new cv::Mat(tmp); 

    return image;
  }
}
