/*
 * sectiontoken.cpp
 *
 *  Created on: Sep 19, 2018
 *      Author: sawan
 */

#include "sectiontoken.h"
#include <string>
using namespace std;

SectionToken::SectionToken(string str, secType_t tempType){
	section = str;
	type = tempType;
}

secType_t SectionToken:: getType() const{
	return type;
}

string SectionToken:: getText(){
	return section;
}
