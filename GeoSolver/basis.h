#pragma once
#include <opencv.hpp>
using namespace cv;
struct line_element
{
	Point p_start;
	Point p_end;
};
struct  circle_element
{
	Point c_center;
	int c_radius;
};
struct arc_element
{
	circle_element a_circle;

};
void draw_line(Mat image, line_element _line,Point offset = Point(0,0),Scalar color=(0,0,255),int thickness = 1 )
{
	Point pt1 = _line.p_start + offset;
	Point pt2 = _line.p_end + offset;
}
void draw_circle(Mat image, circle_element _circle, Point offset = Point(0, 0), Scalar color = (0, 0, 255), int thickness = 1)
{
	Point center = _circle.c_center + offset;
	int radius = _circle.c_radius;
	circle(image, center, radius, color);
}
void draw_point(Mat image, Point _point, Point offset = Point(0, 0), Scalar color = (0, 0, 255), int thickness = 2, int _radius = 2)
{
	circle_element _circle;
	_circle.c_center = _point;
	_circle.c_radius = _radius;
	draw_circle(image, _circle);
}
void draw_arc(Mat image,arc_element)