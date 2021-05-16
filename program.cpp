#include "repeat.h"
#include "program.h"
#include <fstream>
#include <iostream>

void Program::run() {
	// Run the commands for how many commands there are in the commands vector
	for(auto* cmd: cmds) {
		cmd->run();
	}
}

std::istream& operator>>(std::istream& in, Program& prog) {
	while(!in.eof()) {
		std::string command; // Command string to store the commands
		Command* cmd; // Command object to push into the commands vector

		in >> command; // Read Command into the command string
		
		// Check which command it is/if it's a legal command
		if(command == "FORWARD") {
			Forward *f = new Forward; // Create the a Forward object pointer
			in >> *f; // Read the number into the command
			cmd = f; // Set the Command object equal to the Forward object
			prog.cmds.push_back(cmd); // Pass the Command object into the commands vector
		} else if (command == "RIGHT") {
			Right *r = new Right;
			in >> *r;
			cmd = r;
			prog.cmds.push_back(cmd);
		} else if (command == "LEFT") {
			Left *l = new Left;
			in >> *l;
			cmd = l;
			prog.cmds.push_back(cmd);
		} else if (command == "JUMP") {
			Jump *j = new Jump;
			in >> *j;
			cmd = j;
			prog.cmds.push_back(cmd);
		} else if (command == "REPEAT") {
			Repeat *rpt = new Repeat;
			in >> *rpt;
			cmd = rpt;
			prog.cmds.push_back(cmd);
		} else if (command == "]") {
			return in; // If an closing ] is found return
		} else {
			std::cerr << "Illegal Command" << std::endl; // If an illegal command is given print to std::cerr
			exit(EXIT_FAILURE); // Then exit
		}
	}
}

