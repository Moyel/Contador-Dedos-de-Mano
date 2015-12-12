/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SkinDetector.h
 * Author: moyel
 *
 * Created on December 9, 2015, 1:03 AM
 */

#pragma once
#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>


using namespace std;
class SkinDetector
{
public:
SkinDetector(void);
~SkinDetector(void);

cv::Mat getSkin(cv::Mat input);

private:
int Y_MIN;
int Y_MAX;
int Cr_MIN;
int Cr_MAX;
int Cb_MIN;
int Cb_MAX;
};

// end of SkinDetector.h file


