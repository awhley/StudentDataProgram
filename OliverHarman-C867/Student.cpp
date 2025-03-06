#include "Student.h"

// method implementation to satisfy requirement
string Student::GetDegreeProgramToString() {
    string degreeProgramString;

    if (GetDegreeProgram() == 0) {
        degreeProgramString = "SECURITY";
    }
    else if (GetDegreeProgram() == 1) {
        degreeProgramString = "NETWORK";
    }
    else if (GetDegreeProgram() == 2) {
        degreeProgramString = "SOFTWARE";
    }

    return degreeProgramString;
}

// new method to print all student information with proper tab formatting
void Student::PrintAll() {
    cout << GetStudentId() << "\t";
    cout << GetFirstName() << "\t";
    cout << GetLastName() << "\t";
    cout << GetAge() << "\t";
    cout << "{" << GetNumberOfDaysToCompleteCourse1() << ", "
        << GetNumberOfDaysToCompleteCourse2() << ", "
        << GetNumberOfDaysToCompleteCourse3() << "}\t";
    cout << GetDegreeProgramToString();
}