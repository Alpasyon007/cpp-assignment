#include "right.h"

void Right::run() {
    glRotatef(value, 0, 0, -1);

}

std::istream& operator>>(std::istream& in, Right& r) {
    in >> r.value;
    return in;
}