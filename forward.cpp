#include "forward.h"

#include <math.h>

//--------Teammember 3 to complete this section (class definition) ----------

//----------------------------------------------------------------------------

void Forward::run(float unit)
{
    // float newx = unit * cos (direction);
    // float newy = unit * sin (direction);
    // float newPos [3] = {newx, newy, 0.0f};

    // glBegin(GL_LINE);
    //     glVertex3f(currentPos[0], currentPos[1], currentPos[2]);
    //     glVertex3f(newPos[0], newPos[1], newPos[2]);
    // glEnd();

    // currentPos = newPos;

    glBegin(GL_LINE_LOOP);
        glVertex3f(0.0f, 0.0f, 0.0f); //start
        glVertex3f(0.0f, unit, 0.0f); //start
    
    glTranslatef(0.0f,unit,0.0f);

}