#ifndef ARITHPROGRESSION_H
#define ARITHPROGRESSION_H

#include "Progression.h"
#include <iostream>
using namespace std;

class ArithProgression : public Progression {
  public:
    ArithProgression(long increment = 1) : Progression(), increment(increment) {}
  
  protected:
    long increment;

  protected:
    virtual long nextValue() {
        current += increment;
        return current;
    }
};

#endif
