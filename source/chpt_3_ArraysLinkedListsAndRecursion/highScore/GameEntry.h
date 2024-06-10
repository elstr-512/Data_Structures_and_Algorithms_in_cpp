#ifndef GAMEENTRY_H
#define GAMEENTRY_H

#include <iostream>
using namespace std;

class GameEntry {
  public:
    GameEntry(const string& name = "", int score = 0) : name(name), score(score) {}
    string getName() const { return name; }
    int getScore() const { return score; }
  
  protected:

  private:
    string name;
    int score;
};

#endif
