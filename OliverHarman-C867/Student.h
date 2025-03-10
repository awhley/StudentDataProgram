#pragma once
#include <string>
#include <iostream>
#include "Degree.h"

class Student {
private:
    std::string studentId;
    std::string firstName;
    std::string lastName;
    std::string emailAddress;
    int age;
    int daysToComplete[3];
    DegreeProgram degreeProgram;

public:
    // constructor declaration
    Student(std::string studentId, std::string firstName, std::string lastName,
        std::string emailAddress, int age, int days1, int days2, int days3,
        DegreeProgram degreeProgram);

    // destructor
    ~Student();

    // getters
    std::string GetStudentId() const;
    std::string GetFirstName() const;
    std::string GetLastName() const;
    std::string GetEmailAddress() const;
    int GetAge() const;
    int GetNumberOfDaysToCompleteCourse1() const;
    int GetNumberOfDaysToCompleteCourse2() const;
    int GetNumberOfDaysToCompleteCourse3() const;
    DegreeProgram GetDegreeProgram() const;

    // setters
    void SetStudentId(std::string id);
    void SetFirstName(std::string firstName);
    void SetLastName(std::string lastName);
    void SetEmailAddress(std::string email);
    void SetAge(int age);
    void SetNumberOfDaysToCompleteCourse1(int days);
    void SetNumberOfDaysToCompleteCourse2(int days);
    void SetNumberOfDaysToCompleteCourse3(int days);
    void SetDegreeProgram(DegreeProgram program);

    // display methods
    std::string GetDegreeProgramToString() const;
    void Print(int option);
    void PrintAll();
};