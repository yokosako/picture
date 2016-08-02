#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main( int argc, char** argv )
{
  Mat color_img = imread("yokosako.JPG");
  Mat gray_img; //グレースケール画像の変数
  Mat bin_img; //二値化画像の変数
  Mat dst_img;
  cvtColor(color_img, gray_img, CV_RGB2GRAY); //グレースケール化
  threshold(gray_img, bin_img, 100, 255, THRESH_BINARY); //二値化（今回は関係なし）
  resize(color_img, dst_img, Size(), 0.5, 0.5);//画像サイズ変更
    imshow("二値化", bin_img);
    imshow( "グレー画像", gray_img );
    imshow( "画像縮小", dst_img );    
  waitKey(0);
  return 0;
}
