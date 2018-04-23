#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;
using namespace std;

int main(){
	Mat gaussian_kernel=getGaussianKernel(7,1.0);
	int rows=gaussian_kernel.rows;
	int cols=gaussian_kernel.cols;
	if (gaussian_kernel.isContinuous()){
		cols=(cols*rows);
		rows=1;
	}
	cout<<"Gaussian kernel (method 1)...\n";
	for (int row_idx=0;row_idx<rows;++row_idx){
		double* row_ptr=gaussian_kernel.ptr<double>(row_idx);
		for(int col_idx=0;col_idx<cols;++col_idx){
			cout<<row_ptr[col_idx]<<" ";
			cout<<"\n";
		}
	}
	cout<<"\n";
	cout<<"Gaussian kernel (method 2)...\n";
	for (int k=0;k<gaussian_kernel.rows;++k){
		cout<<gaussian_kernel.at<double>(k,0)<<" ";
		cout<<"\n";
	}
	return 0;
}
