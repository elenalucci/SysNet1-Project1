#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std; 

#define clear() cout << "\033[H\033[J"

int main() {

	clear();

	cout << "\n\n\n ------------------------------------------" << endl;
	cout << " ------------------------------------------" << endl;
	cout << " --------- Welcome to our shell! ----------" << endl;
	cout << " ------------------------------------------" << endl;
	cout << " ------------------------------------------" << endl << endl;

	cout << "$$$: ";

	string userInput;
	cin >> userInput;

	cout << userInput;

	if(userInput == "exit"){
		exit(0);
	}

	else if(userInput = '\n'){
		exit(0);
	}

	else {
		cout << "idk if that worked" << endl;
	}

	

}
