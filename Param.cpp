#include <iostream>
#include <string>

#include "Param.hpp"

using namespace std;

Params::Params(){
	background = 0;	
	argumentCount = 0;
}

void Params :: printParams() {

	cout << "InputRedirect: [" << (inputRedirect != NULL) ? inputRedirect : "NULL" << "]" << endl << "OutputRedirect: [" << (outputRedirect != NULL) ? outputRedirect : "NULL" << "]" << endl << "Background: [" << background << "]" << endl << "ArgumentCount: [" << argumentCount << "]" << endl;

	for(int i = 0; i < argumentCount; i++) {

		cout << "ArgumentVector[" << i << "]: [" << argumentVector[i] << "]" << endl;

	}

}

