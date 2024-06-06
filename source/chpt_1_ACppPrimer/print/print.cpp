#include <iostream>

// Pass by value
void print_a(int x) {
    std::cout << "print(int x): " << ++x << std::endl;
}

// Pass by reference
void print_b(int& x) {
    std::cout << "print(int& x): " << ++x << std::endl;
}

int main(int argc, char const* argv[]) {
    int num = 5;
    std::cout << "num = " << num << std::endl << std::endl;

    print_a(num);
    std::cout << "num = " << num << std::endl << std::endl;

    print_b(num);
    std::cout << "num = " << num << std::endl << std::endl;

    return 0;
}
