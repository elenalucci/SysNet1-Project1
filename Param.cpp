#include <iostream>
#include <string>

#include "Param.hpp"

using namespace std;

Params :: Params(){

	inputRedirect = outputRedirect = NULL;
	background = 0;	
	argumentCount = 0;

}

void Params :: addArgument(char* newArgument) {

}

char** Params :: getArguments() {

	return NULL;

}

void Params :: setInputRedirect(char *newInputRedirect) {

	inputRedirect = newInputRedirect;

}

void Params :: setOutputRedirect(char *newOutputRedirect) {

	outputRedirect = newOutputRedirect;

}

void Params :: setBackground(int newBackground) {

	background = newBackground;

}

char* Params :: getInputRedirect() {

	return inputRedirect;

}

char* Params :: getOutputRedirect() {

	return outputRedirect;

}

int Params :: getBackground() {

	return background;

}

void Params :: printParams() {

	cout << "InputRedirect: [";

	if (inputRedirect != NULL) {

		cout << inputRedirect; 
	
	}
	
	else {

		cout << "NULL"; 
		cout << "]" << endl << "OutputRedirect: [";

	}

	if (outputRedirect != NULL) {
		
		cout << outputRedirect;

	}

	else {

		cout<< "NULL" << "]" << endl;
    		cout << "Background: [" << background << "]" << endl 
			<< "ArgumentCount: [" << argumentCount << "]" << endl;

    	}

	for(int i = 0; i < argumentCount; i++) {

		cout << "ArgumentVector[" << i << "]: [" << argumentVector[i] << "]" << endl;

	}

}

