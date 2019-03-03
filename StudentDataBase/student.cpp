#include "pch.h"
#include "student.h"
#include <string>
#include <iostream>
using namespace std;

student::student() {
	studentID = "0";
	firstName = "No First Name";
	lastName = "No Last Name";
	emailAddress = "no-reply@noreply.com";
	age = 0;
	int daysToComplete[3] = { 0, 0, 0 };
	degree;
}

student::~student() {
	//*cout << "Destroying Student"; FIX ME IF POINTERS ARE NEEDED
}

//Student class setters
void student::SetStudentID(string numID) {
	studentID = numID;
	return;
}
void student::SetFirstName(string forename) {
	firstName = forename;
	return;
}
void student::SetLastName(string surname) {
	lastName = surname;
	return;
}
void student::SetEmailAddress(string eAddress) {
	emailAddress = eAddress;
	return;
}
void student::SetAge(int yearsOnPlanet) {
	age = yearsOnPlanet;
	return;
}
void student::SetDaysToComplete(int course1, int course2, int course3) {
	daysToComplete[0] = course1;
	daysToComplete[1] = course2;
	daysToComplete[2] = course3;
	return;
}
void student::SetDegreeType(degreeTypes degreeChoice) {
	degree = degreeChoice;
	return;
}

//Student class getters
string student::GetStudentID() const {
	return studentID;
}
string student::GetFirstName() const {
	return firstName;
}
string student::GetLastName() const {
	return lastName;
}

string student::GetEmailAddress() const {
	return emailAddress;
}
int student::GetAge() const {
	return age;
}
int student::GetDaysToComplete(int index) const {
	return daysToComplete[index];
}
degreeTypes student::GetDegreeProgram() {
	return degree;
}

//Student class virtual print

void student::PrintStudentID() {
	cout << "Student ID: " << studentID << endl; 
}
void student::PrintFirstName() {
	cout << firstName << endl;
}
void student::PrintLastName() {
	cout << lastName << endl;
}
void student::PrintEmailAddress() {
	cout << emailAddress << endl;
}
void student::PrintAge() {
	cout << age << endl;
}
void student::PrintDaysToCompleteAll() {
	for (unsigned int i = 0; i < 3; ++i) {
		switch (i) {
		case 0:
			cout << "First Class: " << daysToComplete[i];
		case 1:
			cout << "Second Class: " << daysToComplete[i];
		case 2:
			cout << "Thrid Class: " << daysToComplete[i];
		default:
			cout << "Error: Too many classes";
		}
	}
}
void student::PrintDaysToComplete1() {
	cout << "First Class: " << daysToComplete[0] << endl;
}
void student::PrintDaysToComplete2() {
	cout << "Second Class: " << daysToComplete[1] << endl;
}
void student::PrintDaysToComplete3() {
	cout << "Thrid Class: " << daysToComplete[2] << endl;
}
void student::PrintDegreeType() {
	cout << "Degree Program: " << degree << endl;
}