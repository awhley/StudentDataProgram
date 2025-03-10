#pragma once
#include <string>
#include <iostream>
#include "Student.h"
using namespace std;

// constructor implementation
Student::Student(string studentId, string firstName, string lastName, string emailAddress,
    int age, int days1, int days2, int days3, DegreeProgram degreeProgram) {
    this->studentId = studentId;
    this->firstName = firstName;
    this->lastName = lastName;
    this->emailAddress = emailAddress;
    this->age = age;
    this->daysToComplete[0] = days1;
    this->daysToComplete[1] = days2;
    this->daysToComplete[2] = days3;
    this->degreeProgram = degreeProgram;
}

// destructor implementation
Student::~Student() {
}

// getters
string Student::GetStudentId() const {
    return studentId;
}

string Student::GetFirstName() const {
    return firstName;
}

string Student::GetLastName() const {
    return lastName;
}

string Student::GetEmailAddress() const {
    return emailAddress;
}

int Student::GetAge() const {
    return age;
}

int Student::GetNumberOfDaysToCompleteCourse1() const {
    return daysToComplete[0];
}

int Student::GetNumberOfDaysToCompleteCourse2() const {
    return daysToComplete[1];
}

int Student::GetNumberOfDaysToCompleteCourse3() const {
    return daysToComplete[2];
}

DegreeProgram Student::GetDegreeProgram() const {
    return degreeProgram;
}

// setters
void Student::SetStudentId(string id) {
    this->studentId = id;
}

void Student::SetFirstName(string firstName) {
    this->firstName = firstName;
}

void Student::SetLastName(string lastName) {
    this->lastName = lastName;
}

void Student::SetEmailAddress(string email) {
    this->emailAddress = email;
}

void Student::SetAge(int age) {
    this->age = age;
}

void Student::SetNumberOfDaysToCompleteCourse1(int days) {
    this->daysToComplete[0] = days;
}

void Student::SetNumberOfDaysToCompleteCourse2(int days) {
    this->daysToComplete[1] = days;
}

void Student::SetNumberOfDaysToCompleteCourse3(int days) {
    this->daysToComplete[2] = days;
}

void Student::SetDegreeProgram(DegreeProgram program) {
    this->degreeProgram = program;
}

// method implementation to satisfy requirement
string Student::GetDegreeProgramToString() const {
    return degreeProgramToString(degreeProgram);
}

// print specific field
void Student::Print(int option) {
    switch (option) {
    case 0: // Student ID
        cout << "Student ID: " << studentId;
        break;
    case 1: // First Name
        cout << "First Name: " << firstName;
        break;
    case 2: // Last Name
        cout << "Last Name: " << lastName;
        break;
    case 3: // Email
        cout << "Email: " << emailAddress;
        break;
    case 4: // Age
        cout << "Age: " << age;
        break;
    case 5: // Days to complete
        cout << "Days in Course: {" << daysToComplete[0] << ", "
            << daysToComplete[1] << ", " << daysToComplete[2] << "}";
        break;
    case 6: // Degree Program
        cout << "Degree Program: " << GetDegreeProgramToString();
        break;
    default:
        cout << "Invalid print option";
    }
}

// new method to print all student information with proper tab formatting
void Student::PrintAll() {
    cout << studentId << "\t";
    cout << firstName << "\t";
    cout << lastName << "\t";
    cout << age << "\t";
    cout << "{" << daysToComplete[0] << ", "
        << daysToComplete[1] << ", " << daysToComplete[2] << "}\t";
    cout << GetDegreeProgramToString();
}