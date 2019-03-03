#include "pch.h"
#include "securityStudent.h"
#include "student.h"

securityStudent::securityStudent() {
	degree = SECURITY;
}
securityStudent::~securityStudent() {

}

degreeTypes securityStudent::GetDegreeProgram() {
	return degree;
}
