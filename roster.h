#pragma once
#include <string>
#include <iostream>
#include "degree.h"
#include "student.h"

using namespace std;

// Requirement E
class Roster {

    private:
        Student* classRosterArray[5];
        string studentID;
        string firstName;
        string lastName;
        string email;
        int age;
        int daysInCourse1;
        int daysInCourse2;
        int daysInCourse3;
        DegreeProgram degProgram;
    
    public:
        void parseAdd();
        void remove(string studID);
        void PrintRoster() const;
        void printAvgDaysInCourse(string studID);
        void printInvalidEmailAddress() const;
        void printByDegree(DegreeProgram degreeprogram);
        Roster();
        ~Roster(); };
