#pragma once

#include <string>
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
