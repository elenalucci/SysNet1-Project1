#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>

#include "Param.cpp"

using namespace std; 

#define clear() cout << "\033[H\033[J"

int main(int argsc, char** argsv) {

	int DEBUG = 0;

	Params param;

	clear();

	cout << "\n\n\n------------------------------------------" << endl;
	cout << "------------------------------------------" << endl;
	cout << "--------- Welcome to our shell! ----------" << endl;
	cout << "------------------------------------------" << endl;
	cout << "------------------------------------------" << endl << endl << endl << endl;

	cout << "$$$: ";

	if(argsc > 1) {

		if(string(argsv[1]) == "-Debug") {

				DEBUG = 1;

		}

	}

	string userInput;
	getline(cin, userInput);

	cout << userInput << endl;

	param.printParams();

	// add while here then probably the fork
	
	if(userInput == "exit\n") {

		exit(0);
	
	}

	else {

		cout << "this is where we need to make things happen" << endl;
	
	}

	return 0;

}
