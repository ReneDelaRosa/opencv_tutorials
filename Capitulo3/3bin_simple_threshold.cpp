#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;

int main(){
	Mat input_image=imread("Lena.png",IMREAD_GRAYSCALE);
	Mat binary_image(input_image.size(),input_image.type());
	threshold(input_image,binary_image,128,255,THRESH_TRUNC);
	imwrite("THRESH_TRUNC.png",binary_image);	
	imshow("Imagen original",input_image);
	imshow("Imagen binarizada",binary_image);
	waitKey(0);
	return 0;
}
