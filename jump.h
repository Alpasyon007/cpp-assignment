#ifndef JUMP_H_
#define JUMP_H_

#include "command.h"

//--------Teammember 3 to complete this section (class declaration) ----------

class Jump:public Command
{
    // private:
    //     float _unit = 0;

    public:
        Jump();
        void run();
        //void setUnit(float); comment domment wajkfsbvmx
        friend std::istream& operator >> (std::istream& in, Jump& j);
};

//----------------------------------------------------------------------------


#endif /* JUMP_H_ */
