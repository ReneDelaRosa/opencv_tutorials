#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace std;
using namespace cv;

/* Code for the flattening and traversal of the image
	 Quinto ejemplo de la obtención de la información de los pixeles con el método	
	 Template class Mat_*/

void scanImage(Mat &image){
	Mat_<Vec3b> _I = image;
	int channels=image.channels();
	int num_rows=image.rows;
	int num_cols=(image.cols*channels);
	
	for (int i=0;i<num_rows;++i){
		for (int j=0;j<num_cols;++j){
			/**
			* The B, G and R components for the (i, j)-th pixel can be accessed
				by:
			* _I(i, j)[0]
			* _I(i, j)[1]
			* _I(i, j)[2]
			**/
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
