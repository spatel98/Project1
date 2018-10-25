/*
 * passagetoken.cpp
 *
 *  Created on: Sep 13, 2018
 *      Author: sawan
 */

#include <iostream>
#include <string>
using namespace std;

#include "passagetoken.h"

PassageToken::PassageToken(string str){
	passage = str;
}

string PassageToken::getText() const{
	return passage;
}
