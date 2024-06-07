#ifndef FibonacciProgression_H
#define FibonacciProgression_H

#include "Progression.h"
#include <iostream>
using namespace std;

class FibonacciProgression : public Progression {
  public:
    FibonacciProgression(long first = 0, long second = 1) 
        : Progression(first), second(second), previous(second - first) 
    {}
    
  protected:
    long second;
    long previous;

  protected:
    virtual long firstValue() {
        current = first;
        previous = second - first;
        return current;
    }

    virtual long nextValue() {
        long temp = previous;
        previous = current;
        current += temp;
        return current;
    }
};

#endif
