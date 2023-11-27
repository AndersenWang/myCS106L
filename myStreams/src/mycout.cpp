
#include <iostream>
using namespace std;

void mycout() {
    // manually flushed
    cout << "flushed\n";
    cout << flush;
    
    //not flushed
    cout << "not flushed\n";
    while(1);
    cout << endl;   //flushed

}