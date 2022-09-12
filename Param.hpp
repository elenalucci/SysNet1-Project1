//Elena Lucci and Tia Sharpe
#include <iostream>

#ifndef PARAM_HPP
#define PARAM_HPP

using namespace std;

#define MAXARGS 32

class Param {

	private:
		//input file name
		char *inputRedirect = NULL;
		//output file name
		char *outputRedirect = NULL;
		//either 1 or 0
		int background;
		//number of elements in the argument vector
		int argumentCount;
		//array that holds parsed tokens
		char *argumentVector[MAXARGS];

	public:
		//default constructor
		Param();
		//adds parsed token to argumentVectpr
		void addArgument(char* newArgument);
		//getters and setters
		char** getArguments();
		void setInputRedirect(char *newInputRedirect);
		void setOutputRedirect(char *newOutputRedirect);
		void setBackground(int newBackground);
		char* getInputRedirect();
		char* getOutputRedirect();
		int getBackground();
		//prints param object values
		void printParams();
		
};

#endif
