#include <iostream>

using namespace std;

#define MAXARGS 32

class Params {

	private:

		char *inputRedirect;
		char *outputRedirect;
		int background;
		int argumentCount;
		char *argumentVector[MAXARGS];

	public:
		Params();
		void printParams();

};

