#include <sstream>
#include <string>

using namespace std;

int stringToInteger(const string& str) {
    istringstream iss(str);

    int result; char remain;
    // "iss >> result" equivalent to:
    // iss >> result; iss.fail();
    if (!(iss >> result) || iss >> remain) {
        throw domain_error("str is not an integer");
    }
    return result;
}