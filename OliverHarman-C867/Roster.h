#pragma once
#include <string>
#include "Student.h"
#include "Degree.h"
#include <iostream>
using namespace std;

class Roster {
public:
    Student* classRosterArray[5];
    int studentSize;

    // constructor and destructor
    Roster();
    ~Roster();

    void add(string studentId, string firstName, string lastName,
        string emailAddress, int age, int daysInCourse1, int daysInCourse2,
        int daysInCourse3, DegreeProgram degreeProgram);
    void remove(string studentId);
    void printAll();
    void printAverageDaysInCourse(string studentId);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeProgram degreeProgram);
    void printLineBreak();
};