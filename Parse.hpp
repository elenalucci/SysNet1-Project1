#include <iostream>
#include "Param.hpp"

#ifndef PARSE_HPP
#define PARSE_HPP

using namespace std;

class Parse{

	private:
		string input;
		char * token;

	public:
		Parse(string userInput);
		Param * parseString();
};

#endif
