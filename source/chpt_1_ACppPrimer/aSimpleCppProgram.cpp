#include <cstdlib>
#include <iostream>
#include <string>
using std::string;
using std::cout;

void characters() {
    std::cout << " 'A' = " << int('A') << std::endl;
    std::cout << "'\\0' = " << int('\0') << std::endl;
}

void sizes() {
    std::cout << "size of int  " << sizeof(int) << std::endl;
    std::cout << "size of long " << sizeof(long) << std::endl;
    std::cout << "size of char " << sizeof(char) << std::endl;

}

void usingStrings() {
    string s = "to be";
    string t = "not" + s;
    string u = s + " or " + t;
    if (s > t) {
        cout << u << std::endl;
    }
    
}

/* This program inputs two numbers x and y and outputs their sum */
int main() {
    int x, y;
    std::cout << "Please enter two numbers: ";
    std::cin >> x >> y;   // input x and y
    int sum = x + y;      // compute their sum
    std::cout << "Their sum is " << sum << std::endl;
    
    characters();
    sizes();
    usingStrings();

    return EXIT_SUCCESS;  //  terminate successfully
}
