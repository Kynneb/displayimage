# ======================================================================
#  FILE:  $URL$
# ======================================================================
#  PROJECT:             :  SARGON
#  VERSION              :  $Revision$
#  LANGUAGE             :  CMake script
#  AUTHOR               :  $LastChangedBy$ 
#  COPYRIGHT            :  AVOS - GMV,S.A.
#  COMPILER             :  cmake version 3.0.2
#  CREATED              :  $CreationDate$
#  CLASS                :  -
#  LAST MODIFIED        :  $LastChangedDate$
#  GENERATED FROM MODEL :  -
#  ORIGINAL MODEL AUTHOR:  -
# ----------------------------------------------------------------------
#  Toplevel CMake build script for the asn1_types library
# ----------------------------------------------------------------------
#  HISTORY
#  $History$
# ======================================================================

# CMakeLists.txt has to be located in the project folder and cmake has to be
# executed from 'project/build' with 'cmake ../'.
cmake_minimum_required(VERSION 2.6)

project(image_ops)

SET(static_lib image_ops)
SET(test_bin image_test)

set(OpenCV_DIR /home/assert/opencv_static/share/OpenCV)

find_package(OpenCV REQUIRED)

add_library(${static_lib} STATIC imageloader.cpp imagedisplay.cpp)

add_executable(${test_bin} main.cpp)

target_link_libraries(${test_bin} ${static_lib} ${OpenCV_LIBS})

