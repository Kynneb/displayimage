#include "imagedisplay.h"
#include "imageloader.h"
#include <opencv2/core/core.hpp>

#include <iostream>
 
  using namespace esrocos_tutorials;
int main(int argc, char ** argv){

  Image_Displayer id(3000);
  Image_Loader il;

  std::string filename("example.jpg"); 

  cv::Mat* image = il.LoadImage(filename);

  if(image) {
    id.DisplayImage(*image);
  } else {
  
    std::cout << "something went terribly wrong" << std::endl;  
  
    return -1;
  }

  delete image;  
}

