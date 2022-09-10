//Elena Lucci and Tia Sharpe
#include "Parse.hpp"
#include <cstring>
//parameterized constructor
Parse::Parse(string userInput){
	input = userInput;
}
//function that parses the string into tokens, and adds the tokens into the correct param field, returns param object
Param * Parse::parseString(){
	//creates new param object per string	
	Param * param = new Param();
		
	char * cstr = new char[input.length()+1];
	strcpy(cstr, input.c_str());

	token = strtok(cstr," \t\n");
	//while token is a length bigger than 0, parse	
	while(token != 0){
		cout << token << endl;

		//sets input redirect name
		if(token[0] == '<'){
			param->setInputRedirect(token);
			//	cout << param->getInputRedirect() << endl;
		}
		//sets ouput redirect name
		else if(token[0] == '>'){
			param->setOutputRedirect(token);
			//	cout << param->getOutputRedirect() << endl;
		}
		//NOT FINISHED: does not accept tokens of only '&' if there is one in the middle of the string and the end
		else if(token[0] == '&' && input[input.length()-1] == '&'){
			//	cout << token << endl;
			param->setBackground(1);
		}
		//all other tokens are added to argument vector
		else{
			param->addArgument(token);
		}
		token = strtok(NULL, " \t\n");
	}


	return param;
}


