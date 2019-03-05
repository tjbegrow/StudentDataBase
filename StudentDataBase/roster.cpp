#include "pch.h"
#include "student.h"
#include "securityStudent.h"
#include "networkStudent.h"
#include "softwareStudent.h"
#include "roster.h"
#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
using namespace std;

roster::roster() {
classRosterArray[0] = nullptr;
classRosterArray[1] = nullptr;
classRosterArray[2] = nullptr;
classRosterArray[3] = nullptr;
classRosterArray[4] = nullptr;
}

roster::~roster() {
	delete classRosterArray[0];
	delete classRosterArray[1];
	delete classRosterArray[2];
	delete classRosterArray[3];
	delete classRosterArray[4];
}

void roster::add(string studentID, string firstName, string lastName, string emailAddress, int age,
	int daysInCourse1, int daysInCourse2, int daysInCourse3, degreeProgram degree) {
	if (classRosterArray[0] == nullptr) {
		if (degree == NETWORK) {
			networkStudent* student1;
			student1 = new networkStudent;
			classRosterArray[0] = student1;
			classRosterArray[0]->SetStudentID(studentID);
			classRosterArray[0]->SetFirstName(firstName);
			classRosterArray[0]->SetLastName(lastName);
			classRosterArray[0]->SetEmailAddress(emailAddress);
			classRosterArray[0]->SetAge(age);
			classRosterArray[0]->SetDaysToComplete(daysInCourse1, daysInCourse2, daysInCourse3);
			classRosterArray[0]->SetDegreeType(degree);
		}
		else if (degree == SECURITY) {
			securityStudent* student1;
			student1 = new securityStudent;
			classRosterArray[0] = student1;
			classRosterArray[0]->SetStudentID(studentID);
			classRosterArray[0]->SetFirstName(firstName);
			classRosterArray[0]->SetLastName(lastName);
			classRosterArray[0]->SetEmailAddress(emailAddress);
			classRosterArray[0]->SetAge(age);
			classRosterArray[0]->SetDaysToComplete(daysInCourse1, daysInCourse2, daysInCourse3);
			classRosterArray[0]->SetDegreeType(degree);
		}
		else {
			softwareStudent* student1;
			student1 = new softwareStudent;
			classRosterArray[0] = student1;
			classRosterArray[0]->SetStudentID(studentID);
			classRosterArray[0]->SetFirstName(firstName);
			classRosterArray[0]->SetLastName(lastName);
			classRosterArray[0]->SetEmailAddress(emailAddress);
			classRosterArray[0]->SetAge(age);
			classRosterArray[0]->SetDaysToComplete(daysInCourse1, daysInCourse2, daysInCourse3);
			classRosterArray[0]->SetDegreeType(degree);
		}
	}
	else if (classRosterArray[1] == nullptr) {
		if (degree == NETWORK) {
			networkStudent* student2;
			student2 = new networkStudent;
			classRosterArray[1] = student2;
			classRosterArray[1]->SetStudentID(studentID);
			classRosterArray[1]->SetFirstName(firstName);
			classRosterArray[1]->SetLastName(lastName);
			classRosterArray[1]->SetEmailAddress(emailAddress);
			classRosterArray[1]->SetAge(age);
			classRosterArray[1]->SetDaysToComplete(daysInCourse1, daysInCourse2, daysInCourse3);
			classRosterArray[1]->SetDegreeType(degree);
		}
		else if (degree == SECURITY) {
			securityStudent* student2;
			student2 = new securityStudent;
			classRosterArray[1] = student2;
			classRosterArray[1]->SetStudentID(studentID);
			classRosterArray[1]->SetFirstName(firstName);
			classRosterArray[1]->SetLastName(lastName);
			classRosterArray[1]->SetEmailAddress(emailAddress);
			classRosterArray[1]->SetAge(age);
			classRosterArray[1]->SetDaysToComplete(daysInCourse1, daysInCourse2, daysInCourse3);
			classRosterArray[1]->SetDegreeType(degree);
		}
		else {
			softwareStudent* student2;
			student2 = new softwareStudent;
			classRosterArray[1] = student2;
			classRosterArray[1]->SetStudentID(studentID);
			classRosterArray[1]->SetFirstName(firstName);
			classRosterArray[1]->SetLastName(lastName);
			classRosterArray[1]->SetEmailAddress(emailAddress);
			classRosterArray[1]->SetAge(age);
			classRosterArray[1]->SetDaysToComplete(daysInCourse1, daysInCourse2, daysInCourse3);
			classRosterArray[1]->SetDegreeType(degree);
		} 
	}
	else if (classRosterArray[2] == nullptr) {

		if (degree == NETWORK) {
			networkStudent* student3;
			student3 = new networkStudent;
			classRosterArray[2] = student3;
			classRosterArray[2]->SetStudentID(studentID);
			classRosterArray[2]->SetFirstName(firstName);
			classRosterArray[2]->SetLastName(lastName);
			classRosterArray[2]->SetEmailAddress(emailAddress);
			classRosterArray[2]->SetAge(age);
			classRosterArray[2]->SetDaysToComplete(daysInCourse1, daysInCourse2, daysInCourse3);
			classRosterArray[2]->SetDegreeType(degree);
		}
		else if (degree == SECURITY) {
			securityStudent* student3;
			student3 = new securityStudent;
			classRosterArray[2] = student3;
			classRosterArray[2]->SetStudentID(studentID);
			classRosterArray[2]->SetFirstName(firstName);
			classRosterArray[2]->SetLastName(lastName);
			classRosterArray[2]->SetEmailAddress(emailAddress);
			classRosterArray[2]->SetAge(age);
			classRosterArray[2]->SetDaysToComplete(daysInCourse1, daysInCourse2, daysInCourse3);
			classRosterArray[2]->SetDegreeType(degree);
		}
		else {
			softwareStudent* student3;
			student3 = new softwareStudent;
			classRosterArray[2] = student3;
			classRosterArray[2]->SetStudentID(studentID);
			classRosterArray[2]->SetFirstName(firstName);
			classRosterArray[2]->SetLastName(lastName);
			classRosterArray[2]->SetEmailAddress(emailAddress);
			classRosterArray[2]->SetAge(age);
			classRosterArray[2]->SetDaysToComplete(daysInCourse1, daysInCourse2, daysInCourse3);
			classRosterArray[2]->SetDegreeType(degree);
		}
	}
	else if (classRosterArray[3] == nullptr) {
		if (degree == NETWORK) {
			networkStudent* student4;
			student4 = new networkStudent;
			classRosterArray[3] = student4;
			classRosterArray[3]->SetStudentID(studentID);
			classRosterArray[3]->SetFirstName(firstName);
			classRosterArray[3]->SetLastName(lastName);
			classRosterArray[3]->SetEmailAddress(emailAddress);
			classRosterArray[3]->SetAge(age);
			classRosterArray[3]->SetDaysToComplete(daysInCourse1, daysInCourse2, daysInCourse3);
			classRosterArray[3]->SetDegreeType(degree);
		}
		else if (degree == SECURITY) {
			securityStudent* student4;
			student4 = new securityStudent;
			classRosterArray[3] = student4;
			classRosterArray[3]->SetStudentID(studentID);
			classRosterArray[3]->SetFirstName(firstName);
			classRosterArray[3]->SetLastName(lastName);
			classRosterArray[3]->SetEmailAddress(emailAddress);
			classRosterArray[3]->SetAge(age);
			classRosterArray[3]->SetDaysToComplete(daysInCourse1, daysInCourse2, daysInCourse3);
			classRosterArray[3]->SetDegreeType(degree);
		}
		else {
			softwareStudent* student4;
			student4 = new softwareStudent;
			classRosterArray[3] = student4;
			classRosterArray[3]->SetStudentID(studentID);
			classRosterArray[3]->SetFirstName(firstName);
			classRosterArray[3]->SetLastName(lastName);
			classRosterArray[3]->SetEmailAddress(emailAddress);
			classRosterArray[3]->SetAge(age);
			classRosterArray[3]->SetDaysToComplete(daysInCourse1, daysInCourse2, daysInCourse3);
			classRosterArray[3]->SetDegreeType(degree);
		}
	}
	else {
		if (degree == NETWORK) {
			networkStudent* student5;
			student5 = new networkStudent;
			classRosterArray[4] = student5;
			classRosterArray[4]->SetStudentID(studentID);
			classRosterArray[4]->SetFirstName(firstName);
			classRosterArray[4]->SetLastName(lastName);
			classRosterArray[4]->SetEmailAddress(emailAddress);
			classRosterArray[4]->SetAge(age);
			classRosterArray[4]->SetDaysToComplete(daysInCourse1, daysInCourse2, daysInCourse3);
			classRosterArray[4]->SetDegreeType(degree);
		}
		else if (degree == SECURITY) {
			securityStudent* student5;
			student5 = new securityStudent;
			classRosterArray[4] = student5;
			classRosterArray[4]->SetStudentID(studentID);
			classRosterArray[4]->SetFirstName(firstName);
			classRosterArray[4]->SetLastName(lastName);
			classRosterArray[4]->SetEmailAddress(emailAddress);
			classRosterArray[4]->SetAge(age);
			classRosterArray[4]->SetDaysToComplete(daysInCourse1, daysInCourse2, daysInCourse3);
			classRosterArray[4]->SetDegreeType(degree);
		}
		else {
			softwareStudent* student5;
			student5 = new softwareStudent;
			classRosterArray[4] = student5;
			classRosterArray[4]->SetStudentID(studentID);
			classRosterArray[4]->SetFirstName(firstName);
			classRosterArray[4]->SetLastName(lastName);
			classRosterArray[4]->SetEmailAddress(emailAddress);
			classRosterArray[4]->SetAge(age);
			classRosterArray[4]->SetDaysToComplete(daysInCourse1, daysInCourse2, daysInCourse3);
			classRosterArray[4]->SetDegreeType(degree);
		}
	}
}

void roster::remove(string studentID) {
	for (unsigned int i = 0; i < size(classRosterArray); i++) {
		if (classRosterArray[i] != nullptr) {
			if (classRosterArray[i]->GetStudentID() == studentID) {
				delete classRosterArray[i];
				classRosterArray[i] = nullptr;
				cout << studentID << " deleted." << endl; 
				i = size(classRosterArray) + 1;
			}
		}
		else {
			cout << "Error: Student doesn't exist" << endl;
		}
	}
}

void roster::printAll() {
	for (unsigned int i = 0; i < size(classRosterArray); i++) { 
			classRosterArray[i]->PrintStudentID();
			cout << "   First Name: ";
			classRosterArray[i]->PrintFirstName();
			cout << "   Last Name: ";
			classRosterArray[i]->PrintLastName();
			cout << "   Age: ";
			classRosterArray[i]->PrintAge();
			cout << "   daysInCourse: {";
			classRosterArray[i]->PrintDaysToComplete1();
			cout << ", ";
			classRosterArray[i]->PrintDaysToComplete2();
			cout << ", ";
			classRosterArray[i]->PrintDaysToComplete3();
			cout << "} ";
			classRosterArray[i]->PrintDegreeType(classRosterArray[i]->GetDegreeProgram());
			cout << endl;
	}
}

void roster::printAverageDaysInCourse(string studentID) {
	for (unsigned int i = 0; i < size(classRosterArray); i++) {
		if (classRosterArray[i]->GetStudentID() == studentID) {
			int class1 = classRosterArray[i]->GetDaysToComplete(0);
			int class2 = classRosterArray[i]->GetDaysToComplete(1);
			int class3 = classRosterArray[i]->GetDaysToComplete(2);
			double average = (class1 + class2 + class3) / 3;
			average = ceil(average);
			cout << classRosterArray[i]->GetStudentID() << "'s average days in the three course is " 
				<< average << "." << endl;
			i = size(classRosterArray) + 1;
		}
	}
}

void roster::printInvalidEmails() {
	for (unsigned int i = 0; i < size(classRosterArray); i++) {
		string toCheck = classRosterArray[i]->GetEmailAddress();
		if (toCheck.find('@') == std::string::npos) {
			cout << "Invaild: " << toCheck << endl;
		}
		if (toCheck.find('.') == std::string::npos) {
			cout << "Invaild: " << toCheck << endl;
		}
		if (toCheck.find(' ') != std::string::npos) {
			cout << "Invaild: " << toCheck << endl;
		}
	}
}

void roster::printByDegreeProgram(degreeProgram degreeProgram) {
	for (unsigned int i = 0; i < size(classRosterArray); i++) {
		if (classRosterArray[i]->GetDegreeProgram() == degreeProgram) {
			classRosterArray[i]->PrintStudentID();
			cout << "   First Name: ";
			classRosterArray[i]->PrintFirstName();
			cout << "   Last Name: ";
			classRosterArray[i]->PrintLastName();
			cout << "   Age: ";
			classRosterArray[i]->PrintAge();
			cout << "   daysInCourse: {";
			classRosterArray[i]->PrintDaysToComplete1();
			cout << ", ";
			classRosterArray[i]->PrintDaysToComplete2();
			cout << ", ";
			classRosterArray[i]->PrintDaysToComplete3();
			cout << "} ";
			classRosterArray[i]->PrintDegreeType(classRosterArray[i]->GetDegreeProgram());
			cout << endl;
		}
	}
}

int main() {
	cout << "Scripting and Programing - Applications - C867" << endl;
	cout << "Programing : C++" << endl;
	cout << "Student ID: 000912409" << endl;
	cout << "Name: Tyler J. Begrow" << endl << endl;

	roster classRoster;
	const string studentData[] =
	{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Tyler,Begrow,tbegrow@wgu.edu,26,25,68,33,SOFTWARE", };

	//Parse string and create objects of students

	for (unsigned int i = 0; i < size(studentData); i++) { 
		string* studentAtt = new string[9];
		string* cell = new string;
		istringstream studentRaw(studentData[i]);
		for( unsigned int j = 0; j < 9; j++) {
			getline(studentRaw, *cell, ',');
			studentAtt[j] = *cell;
		} 
		delete cell;
		string studID = studentAtt[0];
		string firstNm = studentAtt[1];
		string LastNm = studentAtt[2];
		string eMail = studentAtt[3];
		int age = stoi(studentAtt[4]);
		int dIC1 = stoi(studentAtt[5]);
		int dIC2 = stoi(studentAtt[6]);
		int dIC3 = stoi(studentAtt[7]);
		degreeProgram degree = NETWORK;
	
		if (studentAtt[8] == "SOFTWARE") { 
			degree = SOFTWARE;
		}
		else if (studentAtt[8] == "NETWORK") {
			degree = NETWORK;
		}
		else {
			degree = SECURITY;
		}
		delete [] studentAtt;
		 classRoster.add(studID, firstNm, LastNm, eMail, age, dIC1, dIC2, dIC3, degree);
	 };

	classRoster.printAll(); //Prints all data for each student
	classRoster.printInvalidEmails(); // Prints all invalid emails
	classRoster.printAverageDaysInCourse("A1"); //Prints average days from the three classes by student ID
	classRoster.printByDegreeProgram(SOFTWARE); //Prints all data for Software Students Only
	classRoster.remove("A3"); //Deletes data by student ID A3
	classRoster.remove("A3"); //Throws error because student ID A3 was already deleted. 
	
	return 0;
}