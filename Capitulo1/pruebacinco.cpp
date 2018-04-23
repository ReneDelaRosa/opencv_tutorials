#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace std;
using namespace cv;

/* Code for the flattening and traversal of the image
	 Septimo ejemplo de la obtención de la información de los pixeles con el método	
	 Mat::at() */

void scanImage(Mat &image){
	int channels=image.channels();
	int num_rows=image.rows;
	int num_cols=(image.cols*channels);
	//<--Caso de una imagen de un solo canal--> 
	if(channels==1){
		for (int i=0;i<num_rows;++i){
			for (int j=0;j<num_cols;++j){
				// Matrix elements can be accessed via : I.at<uchar>(i,j)
			}
		}
	}
	//<--Caso de una imagen BGR de 3 canales-->
	else if (channels==3){
		for (int i=0;i<num_rows;++i){
			for (int j=0;j<num_cols;++j){
				/**
				* The B, G and R components for the (i, j)-th pixel can be accessed
				by:
				* I.at<Vec3b>(i, j)[0]
				* I.at<Vec3b>(i, j)[1]
				* I.at<Vec3b>(i, j)[2]
				**/
			}		
		}
	}
}
		

int main() {
		
	Mat image=imread("./Lena.png");
	scanImage(image);
	imshow("imagen original", image);
	waitKey(0);
	return 0;	
}
