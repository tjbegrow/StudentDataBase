#pragma once
class roster 
{
public:
	roster();
	~roster();
	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, degreeTypes degree);
	void remove(string studentID);
	void printAll();
	void printDaysInCourse(string studentID);
	void printInvalidEmails();
	void printByDegreeProgram(degreeTypes degreeProgram); //complete
private:
	student* classRosterArray[5];
};

