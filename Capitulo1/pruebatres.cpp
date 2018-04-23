#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace std;
using namespace cv;

/* Continuity of the Mat data matrix
	 Tercer ejemplo de verificación de la continuidad de la matriz de información Mat */

void processImage(Mat input_image) {
	int channels = input_image.channels();
	int numRows = input_image.rows;
	int numCols = input_image.cols * channels;
	
	for (int i = 0; i < numRows; ++i) {
		uchar* image_row = input_image.ptr<uchar>(i);
			for (int j = 0; j < numCols; ++j)
				image_row[j] = 0;
	}
}

int main() {
	Mat image=imread("./Lena.png");
	Mat image_clone = image.clone();
	//Mat another_cloned_image;
	//image.copyTo(another_cloned_image);
	
	if (!image.data){
  	cout << "Image not loaded";
  	return -1;
  }

	int channels = image.channels();
	int num_rows = image.rows;
	int num_cols = (image.cols * channels);
	
	cout << channels<< endl;
	cout << num_rows<< endl;
	cout << num_cols<< endl;

	if (image.isContinuous()) {
		num_cols = num_cols * num_rows;
		num_rows = 1;
	}
	cout << "Despues de verificar continuidad"<< endl;
	cout << num_rows<< endl;
	cout << num_cols<< endl;
	
	processImage(image);
	imshow("image", image);
	imshow("image_clone", image_clone);
	//imshow("image_clone2", another_cloned_image);
	waitKey(0);
	return 0;
}
