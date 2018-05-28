///
/// Introduction to lambda function
/// It is a function object
///
/// 1. Use only when 2-3 lines were needed
/// 2. Use it often on std library algorithms sort, find...
/// 3. When defining predicates
#include <iostream>
#include <algorithm>
#include <vector>

// Function object
struct doubleNum {
int operator()(int num) {
    return num*2;
}
};

int main()
{
    // Lambda function.
    auto f = [](int num){ return num*2; };
    int d = f(2);
    std::cout << d << std::endl;
    // Lambda function.
    std::vector<int> v{1, 2, 3, 4};
    std::for_each(v.begin(), v.end(), [](int n){
        std::cout << n*n << std::endl;
    });
    return 0;
}

