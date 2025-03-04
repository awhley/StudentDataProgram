#pragma once
#include <string>
using namespace std;

enum DegreeProgram {
	SECURITY,
	NETWORK,
	SOFTWARE
};

inline string degreeProgramToString(DegreeProgram degree) {
	switch (degree) {
	case SECURITY: return "SECURITY";
	case NETWORK: return "NETWORK";
	case SOFTWARE: return "SOFTWARE";
	default: return "UNKNOWN";
	}
}