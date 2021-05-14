#include "left.h"

//--------Teammember 3 to complete this section (class definition) ----------

//----------------------------------------------------------------------------

void Left::run()
{
    glRotatef(value, 0, 0, 1);
}

// void Left::setAngle(float angle) {
//     _angle = angle;
// };

std::istream& operator>>(std::istream& in, Left& l)
{
    in >> l.value;
    return in;
}