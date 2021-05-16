#ifndef REPEAT_H_
#define REPEAT_H_

#include "command.h"
#include "program.h"

class Repeat: public Command {
	private:
		Program prog; //creating a program object called prog
		int value; //value only cna be used by repeat
	public:
		void run(); //function run from command 
		friend std::istream& operator>>(std::istream& in, Repeat& rpt); //friend operator
};

#endif /* REPEAT_H_ */
