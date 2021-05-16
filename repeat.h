#ifndef REPEAT_H_
#define REPEAT_H_

#include "command.h"
#include "program.h"

//--------Teammember 2 to complete this section (class declaration) ----------
class Repeat: public Command 
{
	private:
		Program prog;
		int value;
	public:
		void run();
		friend std::istream& operator>>(std::istream& in, Repeat& rpt);
};
//----------------------------------------------------------------------------

#endif /* REPEAT_H_ */
