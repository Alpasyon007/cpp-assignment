#include "right.h"

//--------Teammember 3 to complete this section (class definition) ----------

//----------------------------------------------------------------------------

void Right::run()
{
    glRotatef(_angle, 1, 0, 0);

}

void Right::setAngle(int angle) {
    _angle = angle;
};