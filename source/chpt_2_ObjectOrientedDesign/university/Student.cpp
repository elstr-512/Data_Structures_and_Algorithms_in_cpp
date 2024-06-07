#include "Student.h"

Student::Student(const string& name, const string& idNum, const string& major) : Person(name, idNum) {
    this->major = major;
}

void Student::changeMajor(const string& newMajor) {
    this->major = newMajor;
}

void Student::print() {
    Person::printNoNewLine();
    cout << ", " << "Major: " << major << endl;
}
