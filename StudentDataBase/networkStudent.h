#pragma once
#include "student.h"
class networkStudent : public student {
	public:
		networkStudent();
		~networkStudent();
		degreeProgram GetDegreeProgram();
	private:
		degreeProgram degree;
};

