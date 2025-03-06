#pragma once
#include <string>
#include "Student.h"
#include "Degree.h"
#include <iostream>
using namespace std;

class Roster {
public:
    Student* classRosterArray[5];
    Student* student[5];
    int index = 0;
    int studentSize = 0;

    void add(string studentId, string firstName, string lastName, string emailAddress, int age,
        int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram) {
        student[index] = new Student(studentId, firstName, lastName, emailAddress, age,
            daysInCourse1, daysInCourse2, daysInCourse3, degreeprogram);
        classRosterArray[index] = student[index];
        index++;
        studentSize++;
        if (index > 4) index = 0;
    }

    void remove(string studentId) {
        bool studentFound = false;
        cout << "\nRemoving " << studentId << ":\n\n";
        for (int i = 0; i < studentSize; i++) {
            if (classRosterArray[i]->GetStudentId() == studentId) {
                for (int j = i; j < studentSize - 1; j++) {
                    classRosterArray[j] = classRosterArray[j + 1];
                }
                studentFound = true;
                studentSize--;
                break;
            }
        }
        if (!studentFound) {
            cout << "The student with the ID: " << studentId << " was not found.\n";
        }
    }


    void printAll() {
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


    void printInvalidEmails() {
        cout << "\nDisplaying invalid emails:\n" << endl;
        for (int i = 0; i < studentSize; i++) {
            string e = classRosterArray[i]->GetEmailAddress();
            if (e.find(' ') != string::npos || e.find('@') == string::npos || e.find('.') == string::npos) {
                cout << e << " - is invalid." << endl;
            }
        }
    }

    void printLineBreak() {
        cout << "\n";
    }

    void printAverageDaysInCourse(string studentId) {
        for (int i = 0; i < studentSize; i++) {
            if (classRosterArray[i]->GetStudentId() == studentId) {
                int sum = classRosterArray[i]->GetNumberOfDaysToCompleteCourse1() +
                    classRosterArray[i]->GetNumberOfDaysToCompleteCourse2() +
                    classRosterArray[i]->GetNumberOfDaysToCompleteCourse3();
                cout << "Student ID: " << studentId << ", average days in course is: " << sum / 3 << endl;
                return;
            }
        }
    }

    void printByDegreeProgram(DegreeProgram degreeProgram);

    ~Roster() {
        for (int i = 0; i < studentSize; i++) {
            delete classRosterArray[i];
        }
        cout << "DONE." << endl;
    }
};