
#include <iostream>
#include "getInt.hpp"
#include "str2Int.hpp"
using namespace std;

int main(int argc, char* argv[]) {
    // string str;
    // cin >> str;
    // cout << stringToInteger(str) << endl;
    int val = getInteger("$", "#");
    cout << "val = " << val << endl;
    return 0;
}