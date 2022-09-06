#include <iostream>
#include <string>

#include "Param.hpp"

using namespace std;

Params::Params(){
	background = 0;	
	argumentCount = 0;
}

void Params :: printParams() {

	cout << "InputRedirect: [";
	if (inputRedirect != NULL) 
		cout << inputRedirect; 
	else 
		cout << "NULL"; 
		cout << "]" 
	    << endl 
	    << "OutputRedirect: [";
	if (outputRedirect != NULL) 
		cout << outputRedirect;
    else
		cout<< "NULL" << "]" << endl;
    	cout << "Background: [" 
		<< background 
		<< "]" 
		<< endl 
		<< "ArgumentCount: [" 
		<< argumentCount 
		<< "]" 
		<< endl;

	for(int i = 0; i < argumentCount; i++) {

		cout << "ArgumentVector[" << i << "]: [" << argumentVector[i] << "]" << endl;

	}

}

