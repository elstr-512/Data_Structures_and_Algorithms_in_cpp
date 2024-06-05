#include <iostream>
using namespace std;

class Counter {
private:
    /* data */
    int count;
public:
    Counter();
    void increaseBy(int x);
    int getCount();
};

Counter::Counter() {
    count = 0;
}

void Counter::increaseBy(int x) {
    count += x;
}

int Counter::getCount() {
    return count;
}

int main() {
    Counter ctr;                     // an instance of Counter
    cout << ctr.getCount() << endl;  // prints the initial value (0)
    ctr.increaseBy(3);               // increase by 3
    cout << ctr.getCount() << endl;  // prints 3
    ctr.increaseBy(5);               // increase by 5
    cout << ctr.getCount() << endl;
    return 0;
}