#ifndef __imagedisplay
#define __imagedisplay

#include <opencv2/core/core.hpp>

namespace esrocos_tutorials {
  
  class Image_Displayer {

  int m_displayTime; 

  public:
    
    Image_Displayer(int ms);
    Image_Displayer();

    void DisplayImage(cv::Mat&);
  };
}

#endif
