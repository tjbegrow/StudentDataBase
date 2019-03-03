#include "pch.h"
#include "softwareStudent.h"
#include "student.h"

softwareStudent::softwareStudent() {
	degree = SOFTWARE;
}
softwareStudent::~softwareStudent(){

}

degreeTypes softwareStudent::GetDegreeProgram() {
	return degree;
}
