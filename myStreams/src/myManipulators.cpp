
#include <iomanip>
#include <iostream>
using namespace std;

void myManipulators() {
    cout << "[" << setw(10) << "Hi" << "]\n" << flush;

    cout << "[" << left << setw(10) << "Hi" << "]\n" << flush;

    cout << "[" << left << setfill('-') << setw(10) << "Hi" << "]\n" << flush;
}