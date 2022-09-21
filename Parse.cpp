//Elena Lucci and Tia Sharpe
#include "Parse.hpp"
#include <cstring>
#include <algorithm>
//parameterized constructor
Parse::Parse(){
}

//function that parses the string into tokens, and adds the tokens into the correct param field, returns param object
Param * Parse::parseString(char* cmdLn){
	//creates new param object per string	
	Param * param = new Param();

	token = strtok(cmdLn," \t\n");
	//while token is a length bigger than 0, parse	
	while(token != 0){

		//sets input redirect name
		if(token[0] == '<'){
			
			string newToken;
			int count = 1;	

			while(token[count] != '\0'){
				newToken += token[count];
				count++;
			}
			
			strcpy(token, newToken.c_str());
			param->setInputRedirect(token);
		
		}
		//sets ouput redirect name
		else if(token[0] == '>'){
			
			string newToken;
			int count = 1;

			while(token[count] != '\0'){
				newToken += token[count];
				count++;
			}

			strcpy(token, newToken.c_str());
			param->setOutputRedirect(token);
		}
		
		else if(token[0] == '&') {
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


