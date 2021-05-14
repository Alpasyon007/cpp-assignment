#include "jump.h"

//--------Teammember 3 to complete this section (class definition) ----------

//----------------------------------------------------------------------------

void Jump::run()
{
    glTranslatef(0.0f,Command::value,0.0f);
}

// void Jump::setUnit(float unit) {
//     _unit = unit;
// };

std::istream& operator >> (std::istream& in, Jump& j)
{
    in >> j.value;
    return in;
}