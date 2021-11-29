#include "nativelib.h"
#include <stdio.h>

__declspec(dllexport) void print_line(const char* str)
{
	printf("%s\n", str);
}

__declspec(dllexport) void set_color(cv::Mat* data)
{
	data->setTo(cv::Scalar(0, 255, 255));
}
