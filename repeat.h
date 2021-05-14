#ifndef REPEAT_H_
#define REPEAT_H_

#include "command.h"
#include "program.h"

//--------Teammember 2 to complete this section (class declaration) ----------
class Repeat: public Command{

public:
	void run(int i);
	friend std::istream& operator>>(std::istream& in, Program& prog);


};
//----------------------------------------------------------------------------

#endif /* REPEAT_H_ */
