
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int getInteger() {
    while (true) {
        int val; string line; char trash;
        if (!(getline(cin, line))) {
            throw domain_error("...");
        }
        istringstream iss(line);
        if (iss >> line && !(iss >> trash)) {
            return val;
        }
        
        // Actually, since we create a new stringstream each time,we can remove these lines.
        // iss.clear();
        // iss.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

int getInteger(const string& prompt, const string& reprompt) {
    while (true) {
        cout << prompt;
        string line;
        if (!(getline(cin, line))) {
            throw domain_error("...");
        }

        istringstream iss(line);
        int val; char remain;

        if (iss >> val && !(iss >> remain)) {
            return val;
        }

        cout << reprompt << endl;
    }

    return 0;
}