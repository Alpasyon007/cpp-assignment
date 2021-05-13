#ifndef PROGRAM_H_
#define PROGRAM_H_

#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <vector>
#include <utility>

#include "left.h"
#include "right.h"
#include "forward.h"
#include "jump.h"

class Program {
private:
public:
	std::vector<Command*> cmds;
	void run();
	void getInput(std::string);
};



std::istream& operator>>(std::istream& in, Program& prog);

#endif /* PROGRAM_H_ */
