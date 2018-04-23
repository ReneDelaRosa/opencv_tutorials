#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace std;
using namespace cv;


vector<uchar> getNegativeLUT(){
	vector<uchar> LUT (256,0); //256 ints with value of 0
	for(int i=0;i<256;++i){
		LUT[i]=(uchar)(255-i);
	}
	return LUT;
}

void processImage(Mat& I){
	vector<uchar> LUT = getNegativeLUT();
	for(int i=0;i<I.rows;++i){
		for(int j=0;j<I.cols;++j){
			I.at<uchar>(i,j)=LUT[I.at<uchar>(i,j)];
		}
  }
}

int main(){
	Mat image=imread("Lena.png",IMREAD_GRAYSCALE);
	Mat processed_image=image.clone();
	processImage(processed_image);
	imshow("Input image",image);
	imshow("Processed image",processed_image);
	waitKey(0);
return 0;	
}
