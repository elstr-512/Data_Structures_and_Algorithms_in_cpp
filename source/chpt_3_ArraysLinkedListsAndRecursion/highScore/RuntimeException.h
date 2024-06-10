#ifndef RUNTIMEEXCEPTION_H
#define RUNTIMEEXCEPTION_H

#include <iostream>
using namespace std;

class RuntimeException {
  public:
    RuntimeException(const string& error) {
        errorMessage = error;
    }
    string getMessage() const {
        return errorMessage;
    }

  private:
    string errorMessage;
};

class IndexOutOfBounds : RuntimeException {
  public:
    IndexOutOfBounds(
      const string& error = "Index out of bounds"
    ) : RuntimeException(error) {}
};

#endif
