#include "Roster.h"
#include <iostream>
using namespace std;

// constructor
Roster::Roster() {
    this->studentSize = 0;
    for (int i = 0; i < 5; i++) {
        this->classRosterArray[i] = nullptr;
    }
}

// destructor
Roster::~Roster() {
    for (int i = 0; i < studentSize; i++) {
        delete classRosterArray[i];
        classRosterArray[i] = nullptr;
    }
    cout << "DONE." << endl;
}

void Roster::add(string studentId, string firstName, string lastName, string emailAddress,
    int age, int daysInCourse1, int daysInCourse2, int daysInCourse3,
    DegreeProgram degreeProgram) {

    classRosterArray[studentSize] = new Student(studentId, firstName, lastName, emailAddress,
        age, daysInCourse1, daysInCourse2, daysInCourse3,
        degreeProgram);
    studentSize++;
}

void Roster::remove(string studentId) {
    bool studentFound = false;
    cout << "\nRemoving " << studentId << ":\n\n";
    for (int i = 0; i < studentSize; i++) {
        if (classRosterArray[i]->GetStudentId() == studentId) {
            delete classRosterArray[i];
            for (int j = i; j < studentSize - 1; j++) {
                classRosterArray[j] = classRosterArray[j + 1];
            }
            classRosterArray[studentSize - 1] = nullptr;
            studentFound = true;
            studentSize--;
            break;
        }
    }

    if (!studentFound) {
        cout << "The student with the ID: " << studentId << " was not found.\n";
    }
}

void Roster::printAll() {
    if (studentSize == 0) {
        cout << "No students to display.\n";
        return;
    }

    cout << "Displaying all students:" << endl;
    for (int i = 0; i < studentSize; i++) {
		classRosterArray[i]->PrintAll(); // using the new PrintAll method with tab formatting
        cout << endl;
    }
}

void Roster::printAverageDaysInCourse(string studentId) {
    for (int i = 0; i < studentSize; i++) {
        if (classRosterArray[i]->GetStudentId() == studentId) {
            int sum = classRosterArray[i]->GetNumberOfDaysToCompleteCourse1() +
                classRosterArray[i]->GetNumberOfDaysToCompleteCourse2() +
                classRosterArray[i]->GetNumberOfDaysToCompleteCourse3();
            cout << "Student ID: " << studentId << ", average days in course is: " << sum / 3 << endl;
            return;
        }
    }
    cout << "Student with ID " << studentId << " not found." << endl;
}

void Roster::printInvalidEmails() {
    cout << "\nDisplaying invalid emails:\n" << endl;
    for (int i = 0; i < studentSize; i++) {
        string email = classRosterArray[i]->GetEmailAddress();
        if (email.find(' ') != string::npos || email.find('@') == string::npos || email.find('.') == string::npos) {
            cout << email << " - is invalid." << endl;
        }
    }
}

void Roster::printLineBreak() {
    cout << "\n";
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
    cout << "\nShowing students in degree program: " << degreeProgramToString(degreeProgram) << endl;
    cout << "\n";
    for (int i = 0; i < studentSize; i++) {
        if (classRosterArray[i]->GetDegreeProgram() == degreeProgram) {
            classRosterArray[i]->PrintAll();
            cout << endl;
        }
    }
}