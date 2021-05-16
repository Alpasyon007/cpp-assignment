#include "repeat.h"

//--------Teammember 2 to complete this section (class definition) ----------

#include "repeat.h"

//--------Teammember 2 to complete this section (class definition) ----------

/*run funciton will call the program as many times as the repeat function has to do */
void Repeat::run() {
	for (int i(0); i < value; i++){ //loop as many times as the value 
		prog.run();//calls program 
	}
}

/*The operator has access to the file and the point form which star reading*/

std::istream& operator>>(std::istream& in, Repeat& rpt) {
	std::string aux; //to read file
	in >> rpt.value;//save value to give to run function
	in >> aux;

	if (aux == "[") {//check for the opening of brackets to give back to program 
		in >> rpt.prog;
	}

	return in;
}
//----------------------------------------------------------------------------
