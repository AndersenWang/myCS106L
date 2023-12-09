
#include <iostream>
#include <sstream>
#include <string>

using std::cin;
using std::cout;
using std::domain_error;
using std::endl;
using std::istringstream;
using std::string;

void myIterator();
void myIterator2();
void myTemplate();

template <typename T>
T getInput(const string& prompt, const string& reprompt) {
    while (true) {
        cout << prompt;

        string line;
        if (!(getline(cin, line))) {
            throw domain_error("wrong input...");
        }

        T val; char remain;
        istringstream iss(line);

        if (iss >> val && !(iss >> remain)) {
            return val;
        }

        cout << reprompt << endl;
    }
}