#include "forward.h"

#include <math.h>

//--------Teammember 3 to complete this section (class definition) ----------

//----------------------------------------------------------------------------

void Forward::run()
{
    glBegin(GL_LINE_LOOP);
        glVertex3f(0.0f, 0.0f, 0.0f); //start
        glVertex3f(0.0f, Command::value, 0.0f); //finish
    glEnd();	

    glTranslatef(0.0f,Command::value,0.0f); //move cursor to end point
}

// void Forward::setUnit(float unit) {
//     _unit = unit;
// };

std::istream& operator >> (std::istream& in, Forward& f)
{
    in >> f.value;
    return in;
}