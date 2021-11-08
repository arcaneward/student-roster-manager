#pragma once
#include <string>
#include <iostream>
#include "degree.h"

using namespace std;
// Requirement D
class Student {
    
    private:
        string studentID;
        string firstName;
        string lastName;
        string email;
        int age;
        int daysInCourse[3];
        string degProgram;
        DegreeProgram degreeprogram;

    public:
        string getID() const;
        string getFirst() const;
        string getLast() const;
        string getEmail() const;
        int getAge() const;
        int getDaysInCourse1() const;
        int getDaysInCourse2() const;
        int getDaysInCourse3() const;
        DegreeProgram getDegree() const;
        void setID(string xID);
        void setFirst(string xFirst);
        void setLast(string xLast);
        void setEmail(string xEmail);
        void setAge(int xAge);
        void setDaysInCourse(int xDaysInCourse1, int xDaysInCourse2, int xDaysInCourse3);
        void setDegree(DegreeProgram xDegree);
        void Print() const;
        Student(string studentID, string firstName, string lastName, string email, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram);
        ~Student(); 
};
