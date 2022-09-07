#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std; 

#define clear() cout << "\033[H\033[J"

int main() {

	clear();

	cout << "\n\n\n------------------------------------------" << endl;
	cout << "------------------------------------------" << endl;
	cout << "--------- Welcome to our shell! ----------" << endl;
	cout << "------------------------------------------" << endl;
	cout << "------------------------------------------" << endl << endl << endl << endl;

	cout << "$$$: ";

	string userInput;
	getline(cin, userInput);

	cout << userInput << endl;

	// add while here then probably the fork
	
	if(userInput == "exit\n") {

		exit(0);
	
	}

	else {

		cout << "this is where we need to make things happen" << endl;
	
	}

	return 0;

}
