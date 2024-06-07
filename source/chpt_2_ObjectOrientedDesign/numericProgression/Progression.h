#ifndef PROGRESSION_H
#define PROGRESSION_H

#include <iostream>
using namespace std;

class Progression {
  public:
    Progression(long first = 0) : first(first), current(first) {}

    virtual ~Progression() {}

    void printProgression(int n) {
        cout << firstValue();
        for (size_t i = 2; i <= n; i++) {
            cout << ' ' << nextValue();
        }
        cout << endl;
    }

  protected:
    long first;
    long current;

  protected:
    virtual long firstValue() {
        current = first;
        return current;
    }
    virtual long nextValue() {
        return ++current;
    }
};

#endif
