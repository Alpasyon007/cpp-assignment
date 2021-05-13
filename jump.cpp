#include "jump.h"

//--------Teammember 3 to complete this section (class definition) ----------

//----------------------------------------------------------------------------

void Jump::run(float unit)
{
    glTranslatef(0.0f,unit,0.0f);
}

void Jump::setUnit(float unit) {
    _unit = unit;
};