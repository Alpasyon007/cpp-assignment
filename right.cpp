#include "right.h"

//--------Teammember 3 to complete this section (class definition) ----------

//----------------------------------------------------------------------------

void Right::run()
{
    glRotatef(angle, 1, 0, 0);

}

void Right::setAngle(float angle) {
    _angle = angle;
};