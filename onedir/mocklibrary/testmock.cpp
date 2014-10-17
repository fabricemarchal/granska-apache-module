/*
 * testmock.cpp
 *
 *  Created on: Jun 6, 2014
 *      Author: fmarchal
 */

#include "granska_api.h"

#include <iostream>
#include <sstream>

using namespace std;

int main () {

	int gval = loadGranska();

	if( gval == GRANSKA_SUCCESS ){
		cout << "Running Granska test" << endl;

		stringstream ssm;

		ssm << "Hello world";

		for( int i=0;i<5;i++){

			const char* output = runGranska( ssm.str().c_str() );
			cout << output ;
		}

		cout << "Done" << endl;
	}
	else
		cout << "Granska not initialized properly" << endl;

	return 0;
}


