#include <iostream>
#include <cmath>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
using namespace std;
using namespace cv;

vector<uchar> getLogLUT(uchar maxValue){
	double C=255/log10(1+maxValue);

	vector<uchar> LUT(256,0);
	for (int i=0;i<256;++i)
		LUT[i]=(int)round(C*log10(1+i));
	return LUT;
}

void processImage(Mat& I){
	double maxVal;
	minMaxLoc(I,NULL,&maxVal);

	vector<uchar>LUT=getLogLUT((uchar) maxVal);
	for(int i=0;i<I.rows;++i){
		for(int j=0;j<I.cols;++j){
			I.at<uchar>(i,j)=LUT[I.at<uchar>(i,j)];
		}
	}
}

int main(){
	Mat input_image=imread("Lena.png",IMREAD_GRAYSCALE);
	Mat processed_image=input_image.clone();
	processImage(processed_image);

	imshow("Input image",input_image);
	imshow("Processed image",processed_image);
	waitKey(0);
	return 0;
}
