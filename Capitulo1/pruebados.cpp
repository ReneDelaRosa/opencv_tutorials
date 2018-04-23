#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace std;
using namespace cv;

/* Segundo ejemplo de apertura, muestra y manipulación de la informacion de una imagen
	 utilizando la clase Mat, una función de procesamiento y la copia de información*/

void processImage(Mat input_image) {
	int channels = input_image.channels();
	int numRows = input_image.rows;
	int numCols = input_image.cols * channels;
	for (int i = 0; i < numRows; ++i) {
		uchar* image_row = input_image.ptr<uchar>(i);
			for (int j = 0; j < numCols; ++j)
			image_row[j] = 255;
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

	processImage(image);
	imshow("image", image);
	imshow("image_clone", image_clone);
	//imshow("image_clone2", another_cloned_image);
	waitKey(0);
	return 0;
}
