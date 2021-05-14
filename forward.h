#ifndef FORWARD_H_
#define FORWARD_H_

#include "command.h"

//--------Teammember 3 to complete this section (class declaration) ----------
class Forward:public Command
{
    private:
        //float _unit = 0;
    
    public:
        Forward();
        void run();
       // void setUnit(float);
       friend std::istream& operator >> (std::istream& in, Forward& fwd);
};
//----------------------------------------------------------------------------


#endif /* FORWARD_H_ */
