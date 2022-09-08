#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <string>
#include <cstring>

#include "Param.hpp"
#include "Parse.hpp"

using namespace std; 

#define clear() cout << "\033[H\033[J"

int DEBUG = 0;

int main(int argsc, char** argsv) {

	//int DEBUG = 0;

	Param* param = new Param();
	string userInput;

	clear();

	cout << "\n\n\n------------------------------------------" << endl;
	cout << "------------------------------------------" << endl;
	cout << "--------- Welcome to our shell! ----------" << endl;
	cout << "------------------------------------------" << endl;
	cout << "------------------------------------------" << endl << endl << endl << endl;

	if(argsc > 1) {

		if(string(argsv[1]) == "-Debug") {

				DEBUG = 1;
				param -> printParams();
		
		}

	}
	cout << "$$$: ";
	getline(cin, userInput);
	
	Parse parse(userInput);
	param = parse.parseString();

	//param -> printParams();

	// add while here then probably the fork
	
	if(userInput == "exit\n") {

		exit(0);
	
	}

	else {

		cout<< "this where the magic happens" << endl;
	
	}

	return 0;

}
