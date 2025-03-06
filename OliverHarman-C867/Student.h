#pragma once
#include <string>
#include <iostream>
#include "Degree.h"
using namespace std;

class Student
{
private:
	string studentId;
public:
	// getter && setter for studentId
	void SetStudentId(string id) {
		studentId = id;
	}
	string GetStudentId() {
		return studentId;
	}

private:
	string firstName;
public:
	// getter && setter for firstName
	void SetFirstName(string fName) {
		firstName = fName;
	}
	string GetFirstName() {
		return firstName;
	}

private:
	string lastName;
public:
	// getter && setter for lastName
	void SetLastName(string lName) {
		lastName = lName;
	}
	string GetLastName() {
		return lastName;
	}

private:
	string emailAddress;
public:
	// getter && setter for emailAddress
	void SetEmailAddress(string email) {
		emailAddress = email;
	}
	string GetEmailAddress() {
		return emailAddress;
	}

private:
	int age = 0;
public:
	// getter && setter for age
	void SetAge(int a) {
		age = a;
	}
	int GetAge() {
		return age;
	}

private:
	int numberOfDaysToCompleteEachCourse[3] = { 0,0,0 };
public:
	// getter && setter for numberOfDaysToCompleteEachCourse
	// course 1
	void SetNumberOfDaysToCompleteCourse1(int n) {
		numberOfDaysToCompleteEachCourse[0] = n;
	}
	int GetNumberOfDaysToCompleteCourse1() {
		return numberOfDaysToCompleteEachCourse[0];
	}
	// course 2
	void SetNumberOfDaysToCompleteCourse2(int n) {
		numberOfDaysToCompleteEachCourse[1] = n;
	}
	int GetNumberOfDaysToCompleteCourse2() {
		return numberOfDaysToCompleteEachCourse[1];
	}
	// course 3
	void SetNumberOfDaysToCompleteCourse3(int n) {
		numberOfDaysToCompleteEachCourse[2] = n;
	}
	int GetNumberOfDaysToCompleteCourse3() {
		return numberOfDaysToCompleteEachCourse[2];
	}

private:
	DegreeProgram degreeProgram;
public:
	// getter && setter for degreeProgram
	void SetDegreeProgram(DegreeProgram program) {
		degreeProgram = program;
	}
	DegreeProgram GetDegreeProgram() {
		return degreeProgram;
	}

public:
	// method implemented in Student.cpp to satisfy requirement
	string GetDegreeProgramToString();

	// tabbed output of all student info
	void PrintAll();

	// class constructor
public:
	Student(string studentId, string firstName, string lastName, string emailAddress, int age, int daysToCompleteCourse1, int daysToCompleteCourse2, int daysToCompleteCourse3, DegreeProgram degreeProgram) {
		// assigning variables
		SetStudentId(studentId);
		SetFirstName(firstName);
		SetLastName(lastName);
		SetEmailAddress(emailAddress);
		SetAge(age);
		SetNumberOfDaysToCompleteCourse1(daysToCompleteCourse1);
		SetNumberOfDaysToCompleteCourse2(daysToCompleteCourse2);
		SetNumberOfDaysToCompleteCourse3(daysToCompleteCourse3);
		SetDegreeProgram(degreeProgram);
	}

	// class deconstructor
	~Student() {};

	enum PrintOut {
		StudentId,
		FirstName,
		LastName,
		EmailAddress,
		Age,
		NumberofDaysToCompleteEachCourse,
		DegreeProgram
	};

public:
	void Print(PrintOut p) {
		switch (p)
		{
		case StudentId:
			cout << "Student Id: " << studentId;
			break;
		case FirstName:
			cout << "First Name: " << firstName;
			break;
		case LastName:
			cout << "Last Name: " << lastName;
			break;
		case EmailAddress:
			cout << "Email: " << emailAddress;
			break;
		case Age:
			cout << "Age: " << to_string(age);
			break;
		case NumberofDaysToCompleteEachCourse:
			cout << "Number of Days to Complete Each Course: {"
				<< to_string(numberOfDaysToCompleteEachCourse[0]) << ", "
				<< to_string(numberOfDaysToCompleteEachCourse[1]) << ", "
				<< to_string(numberOfDaysToCompleteEachCourse[2]) << "}";
			break;
		case DegreeProgram:
			cout << "Degree Program: " << GetDegreeProgramToString();
			break;
		default:
			break;
		}
	}
};