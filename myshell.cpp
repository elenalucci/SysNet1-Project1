#include <iostream>
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
	bool t = true;


	string userInput;
	cin >> userInput;

	cout << userInput;

	if(userInput == "exit"){
		exit(0);
	}

	

}
