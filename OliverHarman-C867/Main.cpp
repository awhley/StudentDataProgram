#include <iostream>
#include "Roster.h"
using namespace std;

int main() {
	cout << "C867-Scripting & Programming: Applications" << endl;
	cout << "Language: C++" << endl;
	cout << "Student ID: 010681536" << endl;
	cout << "Name: Oliver Harman" << endl;

	Roster classRoster;
	classRoster.printLineBreak();
	classRoster.add("A1", "John", "Smith", "John1989@gm ail.com", 20, 30, 35, 40, SECURITY);
	classRoster.add("A2", "Suzan", "Erickson", "Erickson_1990@gmailcom", 19, 50, 30, 40, NETWORK);
	classRoster.add("A3", "Jack", "Napoli", "The_lawyer99yahoo.com", 19, 20, 40, 33, SOFTWARE);
	classRoster.add("A4", "Erin", "Black", "Erin.black@comcast.net", 22, 50, 58, 40, SECURITY);
	classRoster.add("A5", "Oliver", "Harman", "oharman@wgu.edu", 26, 18, 28, 38, SOFTWARE);

	classRoster.printAll();
	classRoster.printInvalidEmails();
	classRoster.printLineBreak();

	//prints average days for students in classRosterArray
	for (auto p : classRoster.classRosterArray) {
		classRoster.printAverageDaysInCourse(p->GetStudentId());
	}

	classRoster.printByDegreeProgram(SOFTWARE);

	classRoster.remove("A3");

	classRoster.printAll();

	classRoster.remove("A3");

	return 0;
}