#ifndef LEFT_H_
#define LEFT_H_

#include "command.h"

//--------Teammember 3 to complete this section (class declaration) ----------
class Left:public Command
{
    private:
        //float _angle = 0;

    public:
        void run();
       // void setAngle(int);
       friend std::istream& operator >> (std::istream& in, Left& l);
};
//----------------------------------------------------------------------------

#endif /* LEFT_H_ */
