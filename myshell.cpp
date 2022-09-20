//Tia Sharpe and Elena Lucci
#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <string>
#include <cstring>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

#include "Param.hpp"
#include "Parse.hpp"

using namespace std; 

//makes the shell appear at the top of the screen
#define clear() cout << "\033[H\033[J"

int DEBUG = 0;

/**
 *
 * Handles user input and forking
 *
 * @return the error code;
 *
 */

int main(int argsc, char** argsv) {

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
	//loops through the shell process of accepting a user input and parsing it. Creates new param object every time

	cout << "$$$: ";
	getline(cin, userInput);
	
	int countKids = 0;

	while(userInput != "exit"){
	
		Parse parse(userInput);
		param = parse.parseString();

		param -> printParams();
		
		//part 2

		pid_t pid = fork();

		cout << "incr" << endl;
		
		countKids++;

		cout << countKids << endl;
		if(pid < 0) { 
			
			cout << stderr << "Fork failed" << endl;
			return 1;
			
		}

		else if(pid == 0) {

			if(execvp(param->getArguments()[0], param->getArguments()) == -1) {
			
				cout << "ERROR: COMMAND NOT RECOGNIZED" << endl;

				cout << "decr 1" << endl;
				countKids--;

				exit(1);
			
			}

		cout << "dec1" << endl;
		countKids--;
		cout << countKids << endl;

		}
		
		if(param->getBackground() == 0) {

			wait(NULL);

			cout << "decr" << endl;
			countKids--;

			cout << countKids << endl;
		}

	cout << endl;
	cout << "$$$: ";
	getline(cin, userInput);

	}

	
	return 0;

}
