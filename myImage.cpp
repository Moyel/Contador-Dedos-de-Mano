/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "myImage.hpp"
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace cv;

MyImage::MyImage(){
}

MyImage::MyImage(int webCamera){
	cameraSrc=webCamera;
	cap=VideoCapture(webCamera);
        //capSkin==cap;
}
