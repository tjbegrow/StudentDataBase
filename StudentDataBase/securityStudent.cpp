#include "pch.h"
#include "securityStudent.h"
#include "student.h"

securityStudent::securityStudent() {
	degree = SECURITY;
}
securityStudent::~securityStudent() {

}

degreeProgram securityStudent::GetDegreeProgram() {
	return degree;
}
