#include "ArrayStack.h"
#include <iostream>

int main(int argc, char const *argv[]) {

  ArrayStack<int> arrayStack;

  std::cout << arrayStack.empty() << std::endl;

  return 0;
}
