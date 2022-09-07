#include <iostream>

#ifndef PARAM_HPP
#define PARAM_HPP

using namespace std;

#define MAXARGS 32

class Params {

	private:

		char *inputRedirect = NULL;
		char *outputRedirect = NULL;
		int background;
		int argumentCount;
		char *argumentVector[MAXARGS];

	public:
		Params();
		void addArgument(char* newArgument);
		char** getArguments();
		void setInputRedirect(char *newInputRedirect);
		void setOutputRedirect(char *newOutputRedirect);
		void setBackground(int newBackground);
		char* getInputRedirect();
		char* getOutputRedirect();
		int getBackground();
		void printParams();

};

#endif
