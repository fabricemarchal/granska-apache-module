/*
 * mockgranska.h
 *
 *  Created on: Jun 6, 2014
 *      Author: fmarchal
 */

#ifndef MOCKGRANSKA_H_
#define MOCKGRANSKA_H_

#include <string>

using namespace std;

class mock_granska {
	int control;
public:
	mock_granska();
	string run(const char*);
	virtual ~mock_granska();
};

#endif /* MOCKGRANSKA_H_ */
