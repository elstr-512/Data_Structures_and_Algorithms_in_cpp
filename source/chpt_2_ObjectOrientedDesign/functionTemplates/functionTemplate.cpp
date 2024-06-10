#include <iostream>
#include <typeinfo>

using namespace std;

template <typename T>
int genericMin(T a, T b);

int main(int argc, char const *argv[]) {
    
    cout << "int    " << genericMin(1, 2) << endl;
    cout << "double " << genericMin(1.0, 2.0) << endl;
    cout << "long   " << genericMin(1L, 2L) << endl;
    return 0;
}

template <typename T>
int genericMin(T a, T b) {
    return (a < b ? a : b);
}
