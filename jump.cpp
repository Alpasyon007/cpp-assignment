#include "jump.h"

void Jump::run() {
    glTranslatef(0.0f,Command::value,0.0f);
}

std::istream& operator >> (std::istream& in, Jump& j) {
    in >> j.value;
    return in;
}