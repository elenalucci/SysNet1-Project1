//Tia Sharpe and Elena Lucci
#include <iostream>
#include "Param.hpp"

#ifndef PARSE_HPP
#define PARSE_HPP

using namespace std;

/**
 *
 *
 * This class parses through the user input
 *
 * @author Elena Lucca & Tia Sharpe
 * @date September 10, 2022
 * @info COP 4634 
 *
 */

class Parse{

	private:
		//string input
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
