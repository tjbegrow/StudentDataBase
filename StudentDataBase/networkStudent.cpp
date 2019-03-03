#include "pch.h"
#include "networkStudent.h"
#include "student.h"

networkStudent::networkStudent() {
	degree = NETWORK;
}
networkStudent::~networkStudent() {

}

degreeTypes networkStudent::GetDegreeProgram() {
	return degree;
}
