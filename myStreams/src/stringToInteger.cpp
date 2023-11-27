#include <sstream>
#include <string>

using namespace std;

int stringToInteger(const string& str) {
    istringstream iss(str);

    int result; char remain;
    if (!(iss >> result) || iss >> remain) {
        throw domain_error("str is not an integer");
    }
    return result;
}