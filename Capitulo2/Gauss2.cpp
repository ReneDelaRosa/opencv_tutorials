#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;
using namespace std;

int main(){
	Mat input_image=imread("Lena.png",IMREAD_GRAYSCALE);
	Mat filtered_image;
	GaussianBlur(input_image,filtered_image,Size(7,7),1.0,1.0,BORDER_REPLICATE);
	imshow("Original image",input_image);
	imshow("Filtered image",filtered_image);	
	waitKey(0);
	return 0;
}
