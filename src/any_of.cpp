#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // f inspects a property
    auto f = [](int i){ return i > 10; };
    vector<int> v{1, 2, 3, 4};
    bool val = any_of(v.begin(), v.end(), f);
    if (val)
        cout << "at least one element is greater than 10";
    else
        cout << "none of the elements are greater than 10";
    return 0;
}
