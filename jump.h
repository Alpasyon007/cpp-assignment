#ifndef JUMP_H_
#define JUMP_H_

#include "command.h"

class Jump : public Command {
    public:
        void run();
        friend std::istream& operator >> (std::istream& in, Jump& j);
};

#endif /* JUMP_H_ */
