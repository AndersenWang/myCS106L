
#include <iostream>
#include <string>
#include <utility>

using std::cout;
using std::endl;
using std::pair;
using std::string;


template <typename T>
pair<T, T> my_minmax(T a, T b) {
    if (a < b)
        return {a, b};
    return {b, a};
}

template <typename T>
void print_minmax(T min, T max) {
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;
}

void myTemplate() {
    auto [min, max] = my_minmax<int>(34, 4);
    print_minmax(min, max);
    auto [min1, max1] = my_minmax<float>(21.2, 4.2);
    print_minmax(min1, max1);
    auto [min2, max2] = my_minmax<char>('f', 'a');
    print_minmax(min2, max2);
    auto [min3, max3] = my_minmax<string>("chjdsab", "chijkd");
    print_minmax(min3, max3);
}