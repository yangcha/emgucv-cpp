#pragma once
#include <opencv2/core.hpp>

extern "C" {
	__declspec(dllexport) void print_line(const char* str);
	__declspec(dllexport) void set_color(cv::Mat* data);
}