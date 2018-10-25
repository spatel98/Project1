/*
 * passagetoken.h
 *
 *  Created on: Sep 13, 2018
 *      Author: sawan
 */

#ifndef PASSAGETOKEN_H_
#define PASSAGETOKEN_H_

#include <string>
using namespace std;

class PassageToken{
	public:
		PassageToken(string str);
		string getText() const;

	private:
		string passage;
};



#endif /* PASSAGETOKEN_H_ */
