#include "left.h"

//--------Teammember 3 to complete this section (class definition) ----------

//----------------------------------------------------------------------------

void Left::run()
{
    glRotatef(90, 0, 0, 1);
}

void Left::setAngle(float angle) {
    _angle = angle;
};