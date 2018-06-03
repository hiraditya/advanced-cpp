#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // f inspects a property
    auto f = [](int i){ return i > 10; };
    vector<int> v{1, 2, 3, 40};
    bool val = none_of(v.begin(), v.end(), f);
    if (val)
        cout << "elements not greater than 10";
    else
        cout << "elements greater than 10";
    return 0;
}
