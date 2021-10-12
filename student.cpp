#include<string>
#include<iostream>
#include "student.h"

using namespace std;
    // Requirement D
    Student::Student(string studentID, string firstName, string lastName, string email, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram) {
        this->studentID = studentID;
        this->firstName = firstName;
        this->lastName = lastName;
        this->email = email;
        this->age = age;
        this->daysInCourse[0] = daysInCourse1;
        this->daysInCourse[1] = daysInCourse2;
        this->daysInCourse[2] = daysInCourse3;
        this->degreeprogram = degreeprogram; }
    Student::~Student() { return; }

        void Student::setID(string xID) { studentID = xID; }
        void Student::setFirst(string xFirst) { firstName = xFirst; }
        void Student::setLast(string xLast) { lastName = xLast; }
        void Student::setEmail(string xEmail) { email = xEmail; }
        void Student::setAge(int xAge) { age = xAge; }
        void Student::setDaysInCourse(int xDaysInCourse1, int xDaysInCourse2, int xDaysInCourse3) {
            daysInCourse[0] = xDaysInCourse1;
            daysInCourse[1] = xDaysInCourse2;
            daysInCourse[2] = xDaysInCourse3; }
        void Student::setDegree(DegreeProgram xDegree) { /*DegreeProgram*/ degreeprogram = xDegree; }
        string Student::getID() const { return studentID; }
        string Student::getFirst() const { return firstName; }
        string Student::getLast() const { return lastName; }
        string Student::getEmail() const { return email; }
        int Student::getAge() const { return age; }
        int Student::getDaysInCourse1() const { return daysInCourse[0]; }
        int Student::getDaysInCourse2() const { return daysInCourse[1]; }
        int Student::getDaysInCourse3() const { return daysInCourse[2]; }
        DegreeProgram Student::getDegree() const { return degreeprogram; }

    void Student::Print() const {
        cout << "ID: " << getID() << "\t";
        cout << "Name: " << getFirst() << " " << getLast() << "\t";
        // cout << "FirstName: " << getFirst() << "\t";
        // cout << "Last Name: " << getLast() << "\t";
        cout << "E-mail: " << getEmail() << "\t";
        cout << "Age: " << getAge() << "\t";
        cout << "Days in Course: " << getDaysInCourse1() << ", " << getDaysInCourse2() << ", " << getDaysInCourse3() << "\t";
        cout << "Degree Program: ";
    if (getDegree() == DegreeProgram::SECURITY) { cout << "Security"; }
    else if (getDegree() == DegreeProgram::NETWORK) { cout << "Network"; }
    else if (getDegree() == DegreeProgram::SOFTWARE) { cout << "Software" << endl; } }
