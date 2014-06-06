/*
 * granska-api.h
 *
 *  Created on: Jun 6, 2014
 *      Author: fmarchal
 */

#ifndef GRANSKA_API_H_
#define GRANSKA_API_H_

#define GRANSKA_FAILURE 0
#define GRANSKA_SUCCESS 1

#ifdef __cplusplus /* If this is a C++ compiler, use C linkage */
extern "C" {
#endif

int loadGranska();

const char* runGranska(const char*);


#ifdef __cplusplus /* If this is a C++ compiler, end C linkage */
}
#endif

#endif /* GRANSKA_API_H_ */
