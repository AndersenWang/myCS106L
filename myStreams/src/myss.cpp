
#include <iostream>
#include <sstream>
using namespace std;

int main(int argc, char* []) {
    // Construct oss with the string parameter as the initial string.
    // The buffer is as big as it (reasonably) needs to be.
    ostringstream oss1("output string stream with the position starting in the front.");
    ostringstream oss2("output string stream with the position starting in the end.", stringstream::ate);
    return 0;
}