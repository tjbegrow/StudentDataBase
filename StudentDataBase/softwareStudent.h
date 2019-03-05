#pragma once
#include "student.h"

class softwareStudent: public student { 
	public:
		softwareStudent();
		~softwareStudent();
		degreeProgram GetDegreeProgram();
	private:
		degreeProgram degree;
};

