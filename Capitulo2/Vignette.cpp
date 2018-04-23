#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;

int main(){
	Mat input_image=imread("Lena.png",IMREAD_GRAYSCALE);
	Mat kernel_x=getGaussianKernel(input_image.cols,200);
	Mat kernel_y=getGaussianKernel(input_image.rows,200);
	Mat kernel_x_transpose;
	transpose(kernel_x,kernel_x_transpose);
	Mat kernel=kernel_y*kernel_x_transpose;
	//cout <<"filas:"<<kernel_x_transpose.rows<<" columnas:"<<kernel_x_transpose.cols<<"\n";
	//cout <<"filas:"<<kernel_y.rows<<" columnas:"<<kernel_y.cols<<"\n";
	//cout <<"x:"<<kernel.cols <<" y:" <<kernel.rows;
	Mat mask, processed_image;
	normalize(kernel,mask,0,1,NORM_MINMAX);
	input_image.convertTo(processed_image,CV_64F);
	multiply(mask,processed_image,processed_image);
	convertScaleAbs(processed_image,processed_image);
	imshow("Vignett",processed_image);
	waitKey(0);
	return 0;
}
