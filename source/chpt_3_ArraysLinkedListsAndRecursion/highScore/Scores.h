#ifndef SCORES_H
#define SCORES_H

#include "GameEntry.h"
#include "RuntimeException.h"
#include <iostream>
using namespace std;

class Scores {
  public:
    Scores(int maxEntry = 10) {
        maxEntries = maxEntry;
        entries    = new GameEntry[maxEntries];
        numEntries = 0;
    }

    ~Scores() {
        delete[] entries;
    }

    void add(const GameEntry& entry) {
        int newScore = entry.getScore();

        if (numEntries == maxEntries) {
            if (newScore <= entries[maxEntries - 1].getScore()) {
                return;
            }
        } else {
            numEntries++;
        }

        int i = numEntries - 2;
        while (i >= 0 && newScore > entries[i].getScore()) {
            entries[i + 1] = entries[i];
            i--;
        }

        entries[i + 1] = entry;
    }

    GameEntry remove(int i) {
        if ((i < 0) || (i >= numEntries)) {
            throw IndexOutOfBounds("Invalid Index");
        }

        GameEntry gameEntry = entries[i];

        for (int j = (i + 1); j < numEntries; j++) {
            entries[j - 1] = entries[j];
        }

        numEntries--;
        return gameEntry;
    }

    void printScores() {
        if (numEntries <= 0) {
            return;
        }

        for (int i = 0; i < maxEntries; i++) {
            cout << entries[i].getName() << '\t';
        }
        cout << endl;
        for (int i = 0; i < maxEntries; i++) {
            cout << entries[i].getScore() << '\t';
        }
        cout << endl;
    }

  protected:
  private:
    int maxEntries;
    int numEntries;
    GameEntry* entries;
};

#endif
