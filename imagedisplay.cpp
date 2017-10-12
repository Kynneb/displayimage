#include "imagedisplay.h"
#include "imageloader.h"
#include <opencv2/highgui/highgui.hpp>

namespace esrocos_tutorials {
  
  Image_Displayer::Image_Displayer(int ms): m_displayTime(ms){}
  Image_Displayer::Image_Displayer(): m_displayTime(500){}

  void Image_Displayer::DisplayImage(cv::Mat& image){

    cv::namedWindow( "Display window", cv::WINDOW_AUTOSIZE );
    cv::imshow( "Display window", image );                   

    cv::waitKey(m_displayTime);               
    
    cv::destroyAllWindows();                           
  }
}
