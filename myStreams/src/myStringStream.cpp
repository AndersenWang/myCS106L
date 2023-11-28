
#include <iostream>
#include <sstream>   //stringstream
using namespace std;

void myStringStream() {
    /**
     * stringstream: Constructors with initial text in the buffer.
     * Can optionally provide “modes” such as ate (start at end) or bin (read as binary):
     *   1. istringstream oss(“Initial“, stringstream::bin);
     *   2. ostringstream oss(“Initial“, stringstream::ate);
     * The buffer is as big as it (reasonably) needs to be.
    */

    // 1.1 ========== output string stream with the position starting in the front. ==========
    ostringstream oss1("hello oss1.");
    oss1 << "from bg;";

    // The str() method outputs the string in the entire buffer.
    cout << "oss1.str():\n"  << oss1.str() << endl;
    // the position of index continue.
    oss1 << "continue;";
    cout << "oss1.str():\n"  << oss1.str() << "\n" << endl;

    // 1.2 ========== output string stream with the position starting at end. ==========
    ostringstream oss2("hello oss2.", stringstream::ate);
    oss2 << "at ed;";
    cout << "oss2.str():\n" << oss2.str() << "\n" << endl;



    // 1.3 ========== input string stream with the position starting in the front. ==========
    istringstream iss("16.9hello iss.");
    double amount; string unit;
    iss >> amount >> unit;
    cout << "amount: " << amount << "\nunit: " << unit << "\n" << endl;

    // ★★★★★ manually repositioning the stream position
    ostringstream oss("xxxxEng lish");
    oss << 16.9;
    
    // 1st way
    fpos pos = oss.tellp() + streamoff(-1);   //index 3 - 1 = 2
    oss.seekp(pos);   //move index to 2
    
    oss << "$";
    cout << "1st way:\n" << oss.str() << endl;

    // 2nd way
    oss.seekp(streamoff(1), stringstream::cur);   //Move offset of 1 from current position.
    oss << "#";
    cout << "2st way:\n" << oss.str() << endl;
}