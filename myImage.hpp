/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   myImage.hpp
 * Author: moyel
 *
 * Created on December 1, 2015, 11:50 PM
 */

#ifndef _MYIMAGE_
#define _MYIMAGE_ 

#include <opencv2/imgproc/imgproc.hpp>
#include<opencv2/opencv.hpp>
#include <vector>

using namespace cv;
using namespace std;

class MyImage{
	public:
		MyImage(int webCamera);
		MyImage();
		Mat srcLR;
		Mat src;
		Mat bw;
                Mat Skin;
		vector<Mat> bwList;
		VideoCapture cap;		
		int cameraSrc; 
		void initWebCamera(int i);
};



#endif

