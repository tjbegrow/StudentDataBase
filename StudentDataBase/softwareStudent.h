#pragma once
#include "student.h"

class softwareStudent: public student { 
	public:
		softwareStudent();
		~softwareStudent();
		degreeTypes GetDegreeProgram();
	private:
		degreeTypes degree;
};

