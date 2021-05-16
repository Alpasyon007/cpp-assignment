#include "forward.h"

void Forward::run() {
    glBegin(GL_LINE_LOOP);
        glVertex3f(0.0f, 0.0f, 0.0f); //start
        glVertex3f(Command::value, 0.0f, 0.0f); //finish
    glEnd();	

    glTranslatef(Command::value , 0.0f , 0.0f); //move cursor to end point
}

std::istream& operator >> (std::istream& in, Forward& f) {
    in >> f.value;
    return in;
}