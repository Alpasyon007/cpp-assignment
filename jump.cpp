#include "jump.h"

//--------Teammember 3 to complete this section (class definition) ----------

//----------------------------------------------------------------------------

void Jump::run()
{
    glTranslatef(0.0f,_unit,0.0f);
}

void Jump::setUnit(float unit) {
    _unit = unit;
};