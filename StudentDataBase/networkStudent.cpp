#include "pch.h"
#include "networkStudent.h"
#include "student.h"

networkStudent::networkStudent() {
	degree = NETWORK;
}
networkStudent::~networkStudent() {

}

degreeProgram networkStudent::GetDegreeProgram() {
	return degree;
}
