
#include <iostream>
#include "myscript.hpp"
using namespace std;

int main(int argc, char* argv[]) {
	cout << getInput<int>("input:", "wrong input, again.") << endl;
	return 0;
}
