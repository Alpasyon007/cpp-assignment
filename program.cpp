#include "repeat.h"
#include "program.h"

void Program::run() {
	for(auto* cmd: cmds) {
		cmd->run();
	}
}

std::istream& operator>>(std::istream& in, Program& prog) {
	while(!in.eof()) {
		std::string command;
		Command* cmd;
		in >> command;
		if(command == "FORWARD") {
			Forward *f = new Forward;
			in >> *f;
			cmd = f;
			prog.cmds.push_back(cmd);
			// static Forward f;
			// in >> f;
			// cmd = &f;
			// prog.cmds.push_back(cmd);
		} else if (command == "RIGHT") {
			Right *r = new Right;
			in >> *r;
			cmd = r;
			prog.cmds.push_back(cmd);
			// static Right r;
			// in >> r;
			// cmd = &r;
			// prog.cmds.push_back(cmd);
		} else if (command == "LEFT") {
			Left *l = new Left;
			in >> *l;
			cmd = l;
			prog.cmds.push_back(cmd);
			// static Left l;
			// in >> l;
			// cmd = &l;
			// prog.cmds.push_back(cmd);
		} else if (command == "JUMP") {
			Jump *j = new Jump;
			in >> *j;
			cmd = j;
			prog.cmds.push_back(cmd);
			// static Jump j;
			// in >> j;
			// cmd = &j;
			// prog.cmds.push_back(cmd);
		} else if (command == "REPEAT") {
			Repeat *rpt = new Repeat;
			in >> *rpt;
			cmd = rpt;
			prog.cmds.push_back(cmd);
		} else {
			std::cerr << "Illegal Command" << std::endl;
		}
	}
}

