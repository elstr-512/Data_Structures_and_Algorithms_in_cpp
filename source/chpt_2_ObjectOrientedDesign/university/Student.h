#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person {
  private:
    string major;
    int gradYear;

  public:
    Student(const string& name, const string& idNum, const string& major);

    void changeMajor(const string& newMajor);
    void print();
};
#endif
