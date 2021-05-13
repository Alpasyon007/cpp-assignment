#ifndef FORWARD_H_
#define FORWARD_H_

#include "command.h"

//--------Teammember 3 to complete this section (class declaration) ----------
class Forward:public Command
{
    private:
        //float newPos [3] = {0.0f, 0.0f, 0.0f};
    
    public:
        //float currentPos [3] = {0.0f, 0.0f, 0.0f};
        void run(float unit);
};
//----------------------------------------------------------------------------


#endif /* FORWARD_H_ */
