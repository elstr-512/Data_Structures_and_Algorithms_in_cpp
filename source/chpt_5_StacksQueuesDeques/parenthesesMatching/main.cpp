#include "ArrayStack.h"
#include <iostream>
#include <string>

bool parenthesesMatch(const std::string &expression) {

  char openParentheses = '(';
  char closeParentheses = ')';

  ArrayStack<char> stack;

  for (int i = 0; i < expression.size(); i++) {
    char e = expression.at(i);

    if (e == openParentheses) {
      stack.push(e);
    } else if (e == closeParentheses) {
      if (stack.empty()) {
        return false;
      }
      if (stack.top() != openParentheses) {
        return false;
      }
      stack.pop();
    }
  }
  if (stack.empty()) {
    return true;
  } else {
    return false;
  }
}

void printValid(const std::string &expression) {
  std::string result;
  if (parenthesesMatch(expression)) {
    result = "is valid\n";
  } else {
    result = "is not valid\n";
  }
  std::cout << expression << " " << result;
}

int main(int argc, char const *argv[]) {

  printValid("(1+2)*2");
  printValid("(1+2))*2");

  return 0;
}
