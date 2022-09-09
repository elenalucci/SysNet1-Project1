#include "Parse.hpp"
#include <cstring>
Parse::Parse(){
	input = "";
}

void Parse::setInput(string userInput){

		input = userInput;
}

string Parse::getInput(){
	return input;
}

void Parse::parseString(string userInput){
	char * cstr = new char[userInput.length()+1];
	strcpy(cstr, userInput.c_str());
	
	token = strtok(cstr," \t\n");
	while(token != 0){
		cout << token << endl;
		token = strtok(NULL, " \t\n");
	}

}

void Parse::display(){
	cout << input << endl;
}

