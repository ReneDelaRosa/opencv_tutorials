#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;

int main(){
	Mat input_image=imread("Lena.png",IMREAD_COLOR);//IMREAD_GRAYSCALE); 
	Mat filtered_image;
	boxFilter(
		input_image,
		filtered_image,
		-1,
		Size(3,3),
		Point(-1,-1),
		true,
		BORDER_REPLICATE);//BORDER_REPLICATE); BORDER_WRAP BORDER_CONSTANT
	imshow("Original image", input_image);
	imshow("Filtered image", filtered_image);
	waitKey(0);
	return 0;
}
