/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   roi.hpp
 * Author: moyel
 *
 * Created on December 1, 2015, 11:51 PM
 */

#ifndef ROI 
#define ROI


#include <opencv2/imgproc/imgproc.hpp>
#include<opencv2/opencv.hpp>

using namespace cv;

class My_ROI{
	public:
		My_ROI();
		My_ROI(Point upper_corner, Point lower_corner,Mat src);
		Point upper_corner, lower_corner;
		Mat roi_ptr;
		Scalar color;
		int border_thickness;
		void draw_rectangle(Mat src);
};



#endif

