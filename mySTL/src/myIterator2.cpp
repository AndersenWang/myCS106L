
#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

using std::cout;
using std::endl;
using std::set;
using std::vector;

void printVec(const vector<int>& vec) {
    for (auto elem : vec) {
        cout << elem << " ";
    }
    cout << endl;
}

void myIterator2() {
    vector<int> vec{3, 4, 3, 74, 1, 6, 91, 37, 3, 22};
    cout << "Before sort:" << endl;
    printVec(vec);

    std::sort(vec.begin(), vec.end());   // 排序（升序）

    cout << "After sort:" << endl;
    printVec(vec);

    const int elemToFind = 74;
    auto it = std::find(vec.begin(), vec.end(), elemToFind);   //查找特定元素
    if (it != vec.end()) {
        cout << "Find it:" << *it << endl;
    } else {
        cout << "Not find" << endl;
    }

    set<int> mySet{4, 26, 59, 107};
    //set<int>::iterator begin = mySet.lower_bound(4);
    set<int>::iterator begin = std::lower_bound(mySet.begin(), mySet.end(), 4);   // first >=
    auto end = mySet.upper_bound(58);   // first >
    while (begin != end) {
        cout << *begin << endl;
        ++begin;
    }
    cout << "end: " << *end << endl;
}