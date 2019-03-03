#pragma once
#include "degree.h"
#include <string>
using namespace std;

class student
{
public:
	student();
	~student();
	void SetStudentID(string numID);
	void SetFirstName(string forename);
	void SetLastName(string surname);
	void SetEmailAddress(string eAddress);
	void SetAge(int yearsOnPlanet);
	void SetDaysToComplete(int course1, int course2, int course3);
	void SetDegreeType(degreeTypes degreeChoice);
	
	string GetStudentID() const;
	string GetFirstName() const;
	string GetLastName() const;
	string GetEmailAddress() const;
	int GetAge() const;
	int GetDaysToComplete(int index) const;
	virtual degreeTypes GetDegreeProgram();

	virtual void PrintStudentID();
	virtual void PrintFirstName();
	virtual void PrintLastName();
	virtual void PrintEmailAddress();
	virtual void PrintAge();
	//virtual void PrintDaysToCompleteAll();
	virtual void PrintDaysToComplete1();
	virtual void PrintDaysToComplete2();
	virtual void PrintDaysToComplete3();
	virtual void PrintDegreeType(degreeTypes degree);

private:
	
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int daysToComplete[3];
	degreeTypes degree;
};


