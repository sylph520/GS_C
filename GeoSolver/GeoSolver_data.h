#pragma once
#include <opencv.hpp>
#include "basis.h"
using namespace cv;
void display_segmented_image();
class ImageSegment
{
public:
	void display_segmented_image(Mat segmented_image)
	{
		imshow("segmented image", segmented_image);
		waitKey();
	}
	void display_binarized_segmented_image(Mat binarized_segmented_image)
	{
		imshow("binarized segmented image", binarized_segmented_image);
		waitKey();
	}
	void display_pixels(Mat segmented_image)
	{
		Mat image;
		cvtColor(segmented_image, image, CV_GRAY2RGB);
		for (int i = 0; )

	}
};