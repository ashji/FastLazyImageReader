#ifndef _INC_LAZY_IMG_TYPE_H_
#define _INC_LAZY_IMG_TYPE_H_

#include "LazyMat.h"

// read image file

bool LAZY_API_EXPORT ReadJpeg(lazyimg::Mat* output, FILE* fie_ptr);

bool LAZY_API_EXPORT ReadPng(lazyimg::Mat* output, FILE* fie_ptr);

#ifdef ADD_TIFF_MODULES
bool LAZY_API_EXPORT ReadTiff(lazyimg::Mat* output, const char* file_path, uint32_t n_frame = 0);
#endif // ADD_TIFF_MODULES

// wirte image file
#ifndef READ_ONLY

bool LAZY_API_EXPORT WriteJpeg(lazyimg::Mat img, const char* path, uint32_t quality = 8);

bool LAZY_API_EXPORT WritePng(lazyimg::Mat img, const char* path);

#ifdef ADD_TIFF_MODULES
bool LAZY_API_EXPORT WriteTiff(lazyimg::Mat img, const char* path, uint32_t n_frame = 0);
#endif // ADD_TIFF_MODULES

#endif // READ_ONLY IS END

#endif // _INC_LAZY_IMG_TYPE_H_ IS EOF