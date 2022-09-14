//Tia Sharpe and Elena Lucci
#include <iostream>
#include "Param.hpp"

#ifndef PARSE_HPP
#define PARSE_HPP

using namespace std;

class Parse{

	private:
		//user inputted string
		string input;
		//token object
		char * token;

	public:
		//parameterized constructor
		Parse(string userInput);
		//parses the string into tokens and adds them to the correct param fields
		Param * parseString();
};

#endif
