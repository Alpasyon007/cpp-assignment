#include "left.h"

void Left::run() {
    glRotatef(value, 0, 0, 1);
}

std::istream& operator>>(std::istream& in, Left& l) {
    in >> l.value;
    return in;
}