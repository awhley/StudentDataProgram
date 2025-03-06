#include "Roster.h"

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
    cout << "\nShowing students in degree program: " << degreeProgramToString(degreeProgram) << endl;
    cout << "\n";
    for (int i = 0; i < studentSize; i++) {
        if (classRosterArray[i]->GetDegreeProgram() == degreeProgram) {
            classRosterArray[i]->PrintAll(); // using the new PrintAll method with tab formatting
            cout << endl;
        }
    }
}