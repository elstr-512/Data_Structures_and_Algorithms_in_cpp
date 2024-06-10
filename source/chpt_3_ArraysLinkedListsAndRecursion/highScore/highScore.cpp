#include "Scores.h"
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {

    int score;
    Scores scores;

    vector<string> playerNames ({
        "Liam", "Olivia", "Noah",
        "Emma", "Oliver", "Nick",
 	    "Jim",  "Amelia", "Sophia"
    });

    vector<int> playerScores ({
        12, 4032, 871,
        10, 9999, 764,
        19, 1290, 101,
    });

    while (!playerNames.empty() || !playerScores.empty()) {

        GameEntry gameEntry(playerNames.back(), playerScores.back());
        scores.add(gameEntry);

        scores.printScores();

        playerNames.pop_back();
        playerScores.pop_back();
    }

    int removeScore;
    cout << "\nRemove a score at index: ";
    cin  >> removeScore;

    GameEntry removedEntry = scores.remove(removeScore);
    cout << "Removed " << removedEntry.getName() << 's' << ' ' << "score\n\n";
    scores.printScores();

    return 0;
}
