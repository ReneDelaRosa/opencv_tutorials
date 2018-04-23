#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;

const int KSIZE=7;

int main(){
	Mat input_image=imread("Lena.png",IMREAD_GRAYSCALE);
 	Mat filtered_image;
 	Mat kernel= Mat::ones(KSIZE,KSIZE,CV_32F)/(float)(KSIZE*KSIZE);
	filter2D(input_image,filtered_image,-1,kernel,Point(-1,1),0,BORDER_REPLICATE);
	imshow("Original image",input_image);
	imshow("Filtered image",filtered_image);
	waitKey(0);
	return 0;
}
