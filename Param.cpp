#include <iostream>
#include <string>

#include "Param.hpp"

using namespace std;

Param :: Param(){

	inputRedirect = outputRedirect = NULL;
	background = 0;	
	argumentCount = 0;

}

void Param :: addArgument(char* newArgument) {

}

char** Param :: getArguments() {

	return NULL;

}

void Param :: setInputRedirect(char *newInputRedirect) {

	inputRedirect = newInputRedirect;

}

void Param :: setOutputRedirect(char *newOutputRedirect) {

	outputRedirect = newOutputRedirect;

}

void Param :: setBackground(int newBackground) {

	background = newBackground;

}

char* Param :: getInputRedirect() {

	return inputRedirect;

}

char* Param :: getOutputRedirect() {

	return outputRedirect;

}

int Param :: getBackground() {

	return 0;

}

void Param :: printParams() {

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

