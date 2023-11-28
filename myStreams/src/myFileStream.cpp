
#include <fstream>
#include <iostream>
using namespace std;

// ========== read file line by line ==========
// void myFileStream(string filename) {
//     ifstream file(filename);
//     string line;

//     while (getline(file, line)) {
//         // do something with line
//     }

//     file.close();
// }

// ========== read file token by token ==========
void myFileStream(string filename) {
    ifstream file(filename);
    string token;

    while (file >> token) {
        // fo something with line
    }

    file.close();
}