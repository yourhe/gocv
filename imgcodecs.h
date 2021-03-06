#ifndef _OPENCV3_IMGCODECS_H_
#define _OPENCV3_IMGCODECS_H_

#include <stdbool.h>

#ifdef __cplusplus
#include <opencv2/opencv.hpp>
extern "C" {
#endif

#include "core.h"

Mat Image_IMRead(const char* filename, int flags);
bool Image_IMWrite(const char* filename, Mat img);
struct ByteArray Image_IMEncode(const char* fileExt, Mat img);

#ifdef __cplusplus
}
#endif

#endif //_OPENCV3_IMGCODECS_H_
