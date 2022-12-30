t#include<string>
#include<iostream>
#include "roster.h"

using namespace std;
    // Requirement A
    const string studentData[] =
        {"A1,Yoongi,Min,yoongi@gm ail.com,20,30,35,40,SECURITY",
        "A2,Kim,Namjoon,knamjoon@gmailcom,19,50,30,40,NETWORK",
        "A3,Kim,Napoli,Taeyhung99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Kimseok,Jin,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Redacted,Redacted,redacted@school.edu,35,21,33,49,SOFTWARE"}; 

    // Requirement E
    void Roster::parseAdd() {
        for (int i = 0; i < 5; i++) {
            size_t rt = studentData[i].find(",");
            string studentID = studentData[i].substr(0, rt);
            size_t lt = rt + 1;
            rt = studentData[i].find(",", lt);
            string firstName = studentData[i].substr(lt, rt - lt);
            lt = rt + 1;
            rt = studentData[i].find(",", lt);
            string lastName = studentData[i].substr(lt, rt - lt);
            lt = rt + 1;
            rt = studentData[i].find(",", lt);
            string email = studentData[i].substr(lt, rt - lt);
            lt = rt + 1;
            rt = studentData[i].find(",", lt);
            int age = stoi(studentData[i].substr(lt, rt - lt));
            lt = rt + 1;
            rt = studentData[i].find(",", lt);
            int daysInCourse1 = stoi(studentData[i].substr(lt, rt - lt));
            lt = rt + 1;
            rt = studentData[i].find(",", lt);
            int daysInCourse2 = stoi(studentData[i].substr(lt, rt - lt));
            lt = rt + 1;
            rt = studentData[i].find(",", lt);
            int daysInCourse3 = stoi(studentData[i].substr(lt, rt - lt));
            lt = rt + 1;
            rt = studentData[i].find_last_of("\0");
        if (studentData[i].substr(lt, rt - lt) == "SECURITY") { 
            degProgram = DegreeProgram::SECURITY; }
        else if (studentData[i].substr(lt, rt - lt) == "NETWORK") { 
            degProgram = DegreeProgram::NETWORK; }
        if (studentData[i].substr(lt, rt - lt) == "SOFTWARE") { 
            degProgram = DegreeProgram::SOFTWARE; }
            classRosterArray[i] = new Student(studentID, firstName, lastName, email, age, daysInCourse1, daysInCourse2, daysInCourse3, degProgram); 
        }; 
    }

    void Roster::remove(string StudID) {
        int found = 0;
        for (int i = 0; i < 5; i++) {
            if (classRosterArray[i]->getID().find(StudID) != std::string::npos) {
            classRosterArray[i]->setID(" ");
            classRosterArray[i]->setFirst(" ");
            classRosterArray[i]->setLast(" ");
            classRosterArray[i]->setEmail(" ");
            classRosterArray[i]->setAge(0);
            classRosterArray[i]->setDaysInCourse(0,0,0);
            classRosterArray[i]->setDegree(DegreeProgram::SOFTWARE);
            found = 1;
            cout << "Remove Student ID Record: " << StudID << endl; 
            } 
        }
            if (found == 0) { 
                cout << "Student ID Not Found." << endl; 
            } 
    }

void Roster::PrintRoster() const {
        for (int i = 0; i < 5; i++) { cout << "\t" << endl;
        if (classRosterArray[i]->getID().find(" ") == std::string::npos) {
            classRosterArray[i]->Print(); 
        } 
                                    } 
}

    void Roster::printAvgDaysInCourse(string StudID) {
        int found = 0;
        for (int i = 0; i < 5; i++) {
            if (classRosterArray[i]->getID().find(StudID) != std::string::npos) {
        int total = classRosterArray[i]->getDaysInCourse1() + classRosterArray[i]->getDaysInCourse2() + classRosterArray[i]->getDaysInCourse3();
            cout << "Average Days in Course: ";
            cout << total / 3 << endl;
            found = 1; 
            } 
        }
            if (found != 1) {
            cout << "Student ID Record Not Found." << endl; 
            } 
    }

    void Roster::printInvalidEmailAddress() const {
            cout << "Invalid E-mail Format:" << endl;
        for (int i = 0; i < 5; i++) {
            if (classRosterArray[i]->getEmail().find(' ') != std::string::npos || classRosterArray[i]->getEmail().find('@') == std::string::npos || classRosterArray[i]->getEmail().find('.') == std::string::npos) {
            cout << classRosterArray[i]->getEmail() << endl; 
            } 
        } 
    }

void Roster::printByDegree(DegreeProgram degreeprogram) { cout << "Students in Software Development: " << endl;
        for (int i = 0; i < 5; i++) {
            if (classRosterArray[i]->getDegree() == degreeprogram) {
                classRosterArray[i]->Print(); 
            } 
        } 
                                                        }

// Requirement F
Roster::Roster() { 
    return; 
}
Roster::~Roster() { 
    return; 
}
