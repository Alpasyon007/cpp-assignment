#include "repeat.h"

//--------Teammember 2 to complete this section (class definition) ----------

void Repeat::run() {
	for (int i(0); i < value; i++){
		prog.run();
	}
}

std::istream& operator>>(std::istream& in, Repeat& rpt) {
	std::string aux;
	in >> rpt.value;
	in >> aux;
	
	if (aux == "[") {
		in >> rpt.prog;
	}	

	return in;
}
//----------------------------------------------------------------------------
