/*
 * mockgranska.cpp
 *
 *  Created on: Jun 6, 2014
 *      Author: fmarchal
 */

#include "mockgranska.h"
#include <iostream>
#include <sstream>

mock_granska::mock_granska() {
	control=0;
}

mock_granska::~mock_granska() {
	control=-1;
}

string mock_granska::run(const char* input) {
	control++;

	std::stringstream ssm;

	ssm << "<xml>" << endl
			<< "\t<text>"
			<< input
			<< "</text>\n"
			<< "\t<control value=" << control << "/>\n"
			<< "</xml>" << endl;

	return ssm.str();
}

