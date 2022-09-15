//Tia Sharpe and Elena Lucci
#include <iostream>
#include <string>

#include "Param.hpp"

using namespace std;

Param :: Param(){

	inputRedirect = NULL;
	outputRedirect = NULL;
	background = 0;	
	argumentCount = 0;

}
//adds parsed toked to argument vector
void Param :: addArgument(char* newArgument) {
	argumentVector[argumentCount] = newArgument;
	argumentCount++;
	
}

char** Param :: getArguments() {

	return argumentVector;

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

	return background;

}
//prints out the param object vaules
void Param :: printParams() {

	cout << "InputRedirect: [";

	if (inputRedirect != NULL) {
		cout << inputRedirect; 
	}
	else {
		cout << "NULL"; 
	}

	cout << "]" << endl << "OutputRedirect: [";

	if (outputRedirect != NULL) {	
		cout << outputRedirect;
	}
	else {
		cout<< "NULL";
	}
	
	cout << "]" << endl;
	cout << "Background: [" << background << "]" << endl << "ArgumentCount: [" << argumentCount << "]" << endl;

    	

	for(int i = 0; i < argumentCount; i++) {

		cout << "ArgumentVector[" << i << "]: [" << argumentVector[i] << "]" << endl;

	}

}

