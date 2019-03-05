#include "pch.h"
#include "softwareStudent.h"
#include "student.h"

softwareStudent::softwareStudent() {
	degree = SOFTWARE;
}
softwareStudent::~softwareStudent(){

}

degreeProgram softwareStudent::GetDegreeProgram() {
	return degree;
}
