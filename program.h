#ifndef PROGRAM_H_
#define PROGRAM_H_

#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <vector>

#include "left.h"
#include "right.h"
#include "forward.h"
#include "jump.h"

class Program {
	public:
		std::vector<Command*> cmds; // Commands Vector to store all the commands
		void run(); // Run function which runs all the commands stored in the commands vector
};

std::istream& operator>>(std::istream& in, Program& prog); // Read input from the input file

#endif /* PROGRAM_H_ */
