#include "repeat.h"

//--------Teammember 2 to complete this section (class definition) ----------
friend std::istream& operator>>(std::istream& in, Program& prog){
	int i;
	char aux;
	//Repeat rep;
	in >> i;
	in >>  aux;
	
	if (aux=="["){
		in >> prog;
		//rep.run(i); 
	}
	
	
}

void run(int i){
	int b;
	Program pr;
	for (b=0; b<i; b++){
		pr.run;
	}

}

//----------------------------------------------------------------------------
