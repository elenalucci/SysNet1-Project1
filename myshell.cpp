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
	while(userInput != "exit"){
		cout << "$$$: ";
		getline(cin, userInput);
	
		Parse parse(userInput);
		param = parse.parseString();

		param -> printParams();
		
		//part 2

		pid_t pid = fork();

		int status;
		int cpid;

		if(pid < 0) { 
			
			cout << "Fork failed" << endl;
			return 1;
			
		}

		else if(pid == 0) {
			execvp ( param->getArguments()[0], param->getArguments());

		}
			
		else {

			waitpid(cpid, &status, WNOHANG);

		}
	
	}

	
	return 0;

}
