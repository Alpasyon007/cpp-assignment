#include "repeat.h"

//--------Teammember 2 to complete this section (class definition) ----------

void Repeat::run()
{
	// int b;
	// int i;
	// Program pr;
	for (int i(0); i < value; i++){
		prog.run();
	}
}

std::istream& operator>>(std::istream& in, Repeat& rpt)
{
	std::string aux;
	//Repeat rep;
	in >> rpt.value;
	std::cout << rpt.value << std::endl;
	in >> aux;
	
	if (aux == "[")
	{
		in >> rpt.prog;
		//rep.run(i); 
	}	

	return in;
}
//----------------------------------------------------------------------------
