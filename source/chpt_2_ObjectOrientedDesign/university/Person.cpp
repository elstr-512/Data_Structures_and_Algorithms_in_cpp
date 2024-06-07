#include "Person.h"
using namespace std;

Person::Person(const string &name, const string &idNum) {
    this->name  = name;
    this->idNum = idNum;
}

string Person::getName() const { return name; }
string Person::getIdNum() const { return idNum; }

void Person::print() {
    cout << "ID " << idNum << ": " << name << endl;
}

void Person::printNoNewLine() {
    cout << "ID " << idNum << ": " << name << " ";
}
