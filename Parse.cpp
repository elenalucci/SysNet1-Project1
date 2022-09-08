#include "Parse.hpp"
#include <cstring>
Parse::Parse(string userInput){
	input = userInput;
}

Param * Parse::parseString(){
	Param * param = new Param();
		
	char * cstr = new char[input.length()+1];
	strcpy(cstr, input.c_str());
	
	token = strtok(cstr," \t\n");
	while(token != 0){
		cout << token << endl;
		
		if(token[0] == '<'){
			param->setInputRedirect(token);
			cout << param->getInputRedirect() << endl;
		}
		token = strtok(NULL, " \t\n");
	}

	return param;
}

void Parse::display(){
	cout << input << endl;
}

