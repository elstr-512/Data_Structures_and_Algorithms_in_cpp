#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;

class Person {
  private:
    string name;
    string idNum;
  public:
    Person(const string& name, const string& idNum);

    string getName() const;
    string getIdNum() const;

    void print();
    void printNoNewLine();
};
#endif
