#include "SLinkedList.h"
#include <iostream>
#include <ostream>

using namespace std;

int main(int argc, char const *argv[]) {

    SLinkedList<int> sLinkedList;

    sLinkedList.addFront(10);
    cout << sLinkedList.front() << endl;

    sLinkedList.addFront(22);
    cout << sLinkedList.front() << endl;

    sLinkedList.removeFront();
    cout << sLinkedList.front() << endl;

    cin.get();
    return 0;
}
