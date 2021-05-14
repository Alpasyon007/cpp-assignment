#ifndef RIGHT_H_
#define RIGHT_H_

#include "command.h"

//--------Teammember 3 to complete this section (class declaration) ----------
class Right:public Command
{
    private:
        //float _angle = 0;

    public:
        void run();
        //void setAngle(int);
        friend std::istream& operator>>(std::istream& in, Right& right);

};
//----------------------------------------------------------------------------

#endif /* RIGHT_H_ */
