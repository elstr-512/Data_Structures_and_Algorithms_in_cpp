#include "Progression.h"
#include "ArithProgression.h"
#include "GeomProgression.h"
#include "FibonacciProgression.h"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    Progression* prog;

    // test Progression
    cout << "Base progression with default increment:" << endl;
    prog = new Progression();
    prog->printProgression(10);
    cout << "Base progression with increment 5:" << endl;
    prog = new Progression(5);
    prog->printProgression(10);
    cout << endl;

    // test ArithProgression
    cout << "Arithmetic progression with default increment:" << endl;
    prog = new ArithProgression();
    prog->printProgression(10);
    cout << "Arithmetic progression with increment 5:" << endl;
    prog = new ArithProgression(5);
    prog->printProgression(10);
    cout << endl;

    // test GeomProgression
    cout << "Geometric progression with default base:\n";
    prog = new GeomProgression();
    prog->printProgression(10);
    cout << "Geometric progression with base 3:\n";
    prog = new GeomProgression(3);
    prog->printProgression(10);
    cout << endl;

    // test FibonacciProgression
    cout << "Fibonacci progression with default start values:\n";
    prog = new FibonacciProgression();
    prog->printProgression(10);
    cout << "Fibonacci progression with start values 4 and 6:\n";
    prog = new FibonacciProgression(4, 6);
    prog->printProgression(10);
    cout << endl;
    
    return 0;
}
