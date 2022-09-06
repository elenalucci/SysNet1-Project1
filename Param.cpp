#include <iostream>
#include <string>

#include "Param.hpp"

using namespace std;

void Params :: printParams() {

	cout << "InputRedirect: [" << (inputRedirect != NULL) ? inputRedirect : "NULL" << "]" << endl << "OutputRedirect: [" << (outputRedirect != NULL) ? outputRedirect : "NULL" << "]" << endl << "Background: [" << background << "]" << endl << "ArgumentCount: [" << argumentCount << "]" << endl;

	for(int i = 0; i < argumentCount; i++) {

		cout << "ArgumentVector[" << i << "]: [" << argumentVector[i] << "]" << endl;

	}

}

