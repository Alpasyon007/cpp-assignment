#include "right.h"

//--------Teammember 3 to complete this section (class definition) ----------

//----------------------------------------------------------------------------

void Right::run()
{
    glRotatef(value, 0, 0, -1);

}

// void Right::setAngle(float angle) {
//     _angle = angle;
// };

std::istream& operator>>(std::istream& in, Right& r)
{
    in >> r.value;
    return in;
}