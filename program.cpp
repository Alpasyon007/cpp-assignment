#include "repeat.h"
#include "program.h"


void Program::run() {
	//--------Teammember 1 to replace this section----------
	// glBegin(GL_LINE_LOOP);								// Draw the 3 connected vertices of a triangle
	// 	glVertex3f( 0.0f, 1.0f, 0.0f);					// Top
	// 	glVertex3f(-1.0f,-1.0f, 0.0f);					// Bottom Left
	// 	glVertex3f( 1.0f,-1.0f, 0.0f);					// Bottom Right
	// glEnd();											// Finished Drawing The Triangle

	// glTranslatef(2.5f,0.0f,0.0f);						// Move Left 1.5 Units
	// glRotatef(20,0,0,1);								// Rotate by 20 degrees
	// glBegin(GL_LINE_LOOP);								// Draw the triangle again
	// 	glVertex3f( 0.0f, 1.0f, 0.0f);
	// 	glVertex3f(-1.0f,-1.0f, 0.0f);
	// 	glVertex3f( 1.0f,-1.0f, 0.0f);
	// glEnd();

	// glRotatef(-20,0,0,1);								// Rotate back again
	// glTranslatef(5.0f,0.0f,0.0f);						// Move Right 5 Units
	// glBegin(GL_LINE_LOOP);								// Draw a square
	// 	glVertex3f(-1.0f, 1.0f, 0.0f);					// Top Left
	// 	glVertex3f( 1.0f, 1.0f, 0.0f);					// Top Right
	// 	glVertex3f( 1.0f,-1.0f, 0.0f);					// Bottom Right
	// 	glVertex3f(-1.0f,-1.0f, 0.0f);					// Bottom Left
	// glEnd();
	// Command* bptr;
    // Left l;
	// Forward f;
	// f.setUnit(4);
	// l.setAngle(90);
    // bptr = &l;
	// bptr->run();
	// bptr = &f;
	// bptr->run();
	// bptr = &l;
	// bptr->run();
	// bptr = &f;
	// bptr->run();
	// bptr = &l;
	// bptr->run();
	// bptr = &f;
	// bptr->run();
	// bptr = &l;
	// bptr->run();
	// bptr = &f;
	// bptr->run();
	// forward.run(1);
	for(auto* cmd: cmds) {
		cmd->run();
	}
	//-------------------------------------------------------
}

// void Program::getInput(std::string input) {
// 	_input = input;
// }

std::istream& operator>>(std::istream& in, Program& prog)
{
	std::string command;
	float value;
	while(!in.eof()) {
		static Command* cmd;
		in >> command;
		if(command == "FORWARD") {
			static Forward f;
			in >> value;
			f.setUnit(value);
			cmd = &f;
			prog.cmds.push_back(cmd);
		} else if (command == "RIGHT") {
			static Right r;
			in >> value;
			r.setAngle(value);
			cmd = &r;
			prog.cmds.push_back(cmd);
		} else if (command == "LEFT") {
			static Left l;
			in >> value;
			l.setAngle(value);
			cmd = &l;
			prog.cmds.push_back(cmd);
		} else if (command == "JUMP") {
			static Jump j;
			in >> value;
			j.setUnit(value);
			cmd = &j;
			prog.cmds.push_back(cmd);
		} else if (command == "REPEAT") {

		}
	}
	//--------Teammember 1 to complete this section----------
	// std::string input;
	// for( std::string line; getline( in, line ); )
	// {
	// 	input += line + " ";
	// }
	// prog.getInput(input);
	// std::cout << input << std::endl;
	//-------------------------------------------------------
}

