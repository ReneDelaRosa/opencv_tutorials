#include <opencv2/highgui.hpp>
#include <opencv2/core/core.hpp>
using namespace std;
using namespace cv;

/* Primer ejemplo de apertura, muestra, ROI y división de canales de una imagen
	 utilizando la clase Mat*/

int main() {
	Mat image = imread("Lena.png", IMREAD_COLOR);
	Mat roi_image(image, Rect(300,150,200,200));
	vector<Mat> channels;
	split(image,channels);
	imshow("Blue",channels[0]);
	imshow("Green",channels[1]);
	imshow("Red",channels[2]);
	imshow("Output", image);
	imshow("Region of interest",roi_image);
	waitKey(0);
	return 0;
}
