// Requirement B: Create the following files: degree.h, student.h, student.cpp, roster.h, roster.cpp, main.cpp‹
#include<string>
#include<iostream>
#include "roster.h"
#include "student.h"

using namespace std;
// Requirement F

int main() {
        cout << "C867 - Scripting and Programming: Applications\t" << endl;
        cout << "Language: C++\t" << endl;
        cout << "Student ID: #007157921\t" << endl;
        cout << "Name: Lindsey Thornton" << endl;
    
    Roster classRoster;
    classRoster.parseAdd();
    classRoster.PrintRoster();
        cout << "\t" << endl;
    classRoster.printInvalidEmailAddress();
        cout << "\t" << endl;
    string stuID[5] = { "A1", "A2", "A3", "A4", "A5" };
    for (int i = 0; i < 5; i++) {
        cout << stuID[i] << ": ";
        classRoster.printAvgDaysInCourse(stuID[i]); }
        cout << endl;
        classRoster.printByDegree(DegreeProgram::SOFTWARE);
        cout << endl;
        classRoster.remove("A3");
        classRoster.PrintRoster();
        cout << endl;
        classRoster.remove("A3");
        cout << endl;
    return 0; }
