#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace std;
using namespace cv;

/* Code for the flattening and traversal of the image
	 Cuarto ejemplo de verificación de la continuidad de la matriz de información Mat 
	 y de la obtención de la información de los pixeles con el método	Mat::ptr()*/

void scanImage(Mat &image){
	int channels=image.channels();
	int num_rows=image.rows;
	int num_cols=(image.cols*channels);

	if(image.isContinuous()){
		num_cols*=num_rows;
		num_rows=1;
	}

	for (int i=0;i<num_rows;++i){
		uchar* row_ptr=image.ptr<uchar>(i);
		for (int j=0;j<num_cols;++j){
			//Perform operations on pixel value row_ptr[j]
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
