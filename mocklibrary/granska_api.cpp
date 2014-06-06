/*
 * granska_api.cpp
 *
 *  Created on: Jun 6, 2014
 *      Author: fmarchal
 */

#include "granska_api.h"
#include "mockgranska.h"
#include <iostream>

using namespace std;


static mock_granska* global_granska = NULL;


 int loadGranska(){

	try{
		global_granska = new mock_granska();
	}
	catch( ... ){
		return GRANSKA_FAILURE;
	}
	return GRANSKA_SUCCESS;
}

const char* runGranska(const char* input){
	return global_granska->run( input ).c_str();
}




