#pragma once
#include <string>
using namespace std;

enum DegreeProgram {
    SECURITY,
    NETWORK,
    SOFTWARE
};

inline string degreeProgramToString(DegreeProgram dp) {
    switch (dp) {
    case SECURITY: return "SECURITY";
    case NETWORK:  return "NETWORK";
    case SOFTWARE: return "SOFTWARE";
    default: return "UNKNOWN";
    }
}