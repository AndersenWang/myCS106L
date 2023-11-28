
#include <iostream>
#include<string>
using namespace std;
 
// 1. ====================
// int main(int argc, char* argv[]) {
//     string motto = "Ito-En is life";

//     motto[12] = 't';   // motto[12] is a reference to the char of *(motto + 12)

//     cout << motto << endl;
//     return 0;
// }

// 2. ====================
// int main(int argc, char* argv[]) {
//     string motto = "Ito-En is life";

//     auto letter = motto[12];
//     letter = 't';   // using auto will not create a reference.

//     cout << motto << endl;
//     return 0;
// }

// ========== Be careful about dangling references: references to variables out of scope. ==========
// string& getRandomWord() {
//     string word = "CS106L";
//     return word;
// }
// int main(int argc, char* argv[]) {
//     string& randomword = getRandomWord();   // word was discarded after getRandomWord() func. called  ;  you should make the copy
//     cout << randomword << endl;
//     return 0;
// }

struct time {
    int hour;
    int minute;
    time(int hour, int minute) {
        this->hour = hour;
        this->minute = minute;
    }
};
int main() {
    return 0;
}