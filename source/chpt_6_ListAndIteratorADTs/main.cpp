#include <algorithm>
#include <iostream>
#include <ostream>
#include <vector>

int main(int argc, char const *argv[]) {
    std::vector<int> a(8);
    std::cout << &a << std::endl;

    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    std::vector<int> vector(array, array + 10);

    for (int i = 0; i < vector.size(); i++) {
        std::cout << vector.at(i) << " ";
    }   std::cout << std::endl;
    
    std::random_shuffle(vector.begin(), vector.end());

    for (int i : vector) {
        std::cout << vector.at(i) << " ";
    }   std::cout << std::endl;
    
    return 0;
}
