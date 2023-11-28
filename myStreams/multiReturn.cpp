
#include <iostream>
#include <utility>
using namespace std;

// 1. =============== reference parameters ===============
// void findPriceRange(int dist, int& min, int& max) {
//     min = static_cast<int>(dist * 0.08 + 100);
//     max = static_cast<int>(dist * 0.36 + 750);
// }
// int main(int argc, char* argv[]) {
//     int dist = 6452;
//     int min, max;
//     findPriceRange(dist, min, max);
//     cout << "You can find prices between: "
//          << min << " and " <<  max << endl;
//     return 0;
// }


// 2. =============== return a pair of values. ===============
// pair<int, int> findPriceRange(int dist) {
//     int min = static_cast<int>(dist * 0.08 + 100);
//     int max = static_cast<int>(dist * 0.36 + 750);
//     return make_pair(min, max);
// }
// int main(int argc, char* argv[]) {
//     int dist = 6452;
//     pair<int, int> p = findPriceRange(dist);
//     cout << "You can find prices between: "
//          << p.first << " and " <<  p.second << endl;
//     return 0;
// }

// 3. =============== use auto ===============
// pair<int, int> findPriceRange(int dist) {
//     int min = static_cast<int>(dist * 0.08 + 100);
//     int max = static_cast<int>(dist * 0.36 + 750);
//     return make_pair(min, max);
// }

// int main(int argc, char* argv[]) {
//     int dist = 6452;
//     auto p = findPriceRange(dist);
//     cout << "You can find prices between: "
//          << p.first << " and " <<  p.second << endl;
//     return 0;
// }

// 4. =============== automatically infer the type of each variable ===============
// pair<int, int> findPriceRange(int dist) {
//     int min = static_cast<int>(dist * 0.08 + 100);
//     int max = static_cast<int>(dist * 0.36 + 750);
//     return make_pair(min, max);
// }

// int main(int argc, char* argv[]) {
//     int dist = 6452;
//     auto [min, max] = findPriceRange(dist);
//     cout << "You can find prices between: "
//          << min << " and " <<  max << endl;
//     return 0;
// }

// 5. =============== use struct ===============
struct PriceRange {
    int min;
    int max;
};
PriceRange findPriceRange(int dist) {
    int min = static_cast<int>(dist * 0.08 + 100);
    int max = static_cast<int>(dist * 0.36 + 750);
    return PriceRange{min, max};   // The order the binding occurs is the same order as the variables are laid in the struct.
}
int main(int argc, char* argv[]) {
    int dist = 6452;
    PriceRange p = findPriceRange(dist);
    cout << "You can find prices between: "
         << p.min << " and " <<  p.max << endl;
    return 0;
}