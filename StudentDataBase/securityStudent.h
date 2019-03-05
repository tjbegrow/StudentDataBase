#pragma once
#include "student.h"

class securityStudent: public student {
	public:
		securityStudent();
		~securityStudent();
		degreeProgram GetDegreeProgram();
	private:
		degreeProgram degree;
};

