#ifndef GEOMPROGRESSION_H
#define GEOMPROGRESSION_H

#include "Progression.h"
#include <iostream>
using namespace std;

class GeomProgression : public Progression {
  public:
    GeomProgression(long base = 2) : Progression(1), base(base) {}

  protected:
    long base;

  protected:
    virtual long nextValue() {
        return current *= base;
    }
};

#endif
