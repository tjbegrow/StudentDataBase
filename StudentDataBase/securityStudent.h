#pragma once
#include "student.h"

class securityStudent: public student {
	public:
		securityStudent();
		~securityStudent();
		degreeTypes GetDegreeProgram();
	private:
		degreeTypes degree;
};

