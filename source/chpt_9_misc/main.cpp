#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
#include "merge.hpp"

void printVector(std::vector<int> const &vector) {
    for (int number : vector) {
        std::cout << number << " ";
    }   std::cout << "\n";
}

int main(int argc, char const *argv[]) {
    std::vector<int> vector_even({ 
    83, 13, 29, 57, 63, 35, 
    92, 30, 57, 57, 43, 57, 
    26, 36, 46, 12, 29, 78, 
    39, 28, 75, 77, 52, 91, 
    88, 13, 23, 12, 99, 93, 
    14, 82, 96, 85, 92, 59, 
    });

    std::vector<int> vector_odd({ 
    83, 13, 29, 57, 63, 35, 
    92, 30, 57, 57, 43, 57, 
    26, 36, 46, 12, 29, 78, 
    39, 28, 75, 77, 52, 91, 
    88, 13, 23, 12, 99, 93, 
    14, 82, 96, 85, 92, 59, 
    });



    std::vector<int> s1({2, 5, 8, 11, 12, 14, 15});
    std::vector<int> s2({3, 9, 10, 18, 19, 22, 25});

    std::vector<int> merged = merge(s1, s2);

    printVector(merged);

    return 0; 
}
