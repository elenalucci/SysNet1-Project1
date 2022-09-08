#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>

#include "Param.hpp"

using namespace std; 

#define clear() cout << "\033[H\033[J"

int main(int argsc, char** argsv) {

	int DEBUG = 0;

	Param* param = new Param();

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

<<<<<<< HEAD
	cout << userInput << endl;
	
	//param -> setInputRedirect("input.txt");
=======
	//cout << userInput << endl;
>>>>>>> e737c8db74d1421ca2a8edd8d480c9c8d26c63e3

	param -> printParams();

	// add while here then probably the fork
	
	if(userInput == "exit\n") {

		exit(0);
	
	}

	else {

		cout << "this is where we need to make things happen" << endl;
	
	}

	return 0;

}
