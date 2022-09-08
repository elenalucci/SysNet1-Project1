#include <iostream>

#ifndef PARSE_HPP
#define PARSE_HPP

using namespace std;

class Parse{

	private:
		string input;
		char * token;
		

	public:
		Parse();
		void setInput(string userInput);
		string getInput();
		//make into a char *
		void parseString(string userInput);
		void display();
};

#endif
