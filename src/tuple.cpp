///
/// Introduction to tuple
/// Heterogenous fixed sized data structure
/// generalization of std::pair
///
#include <iostream>
#include <tuple>

int main()
{
    std::tuple<int, char, double> t(100, 'A', 10.0);
    std::cout << "MyTuple:" << std::get<0>(t)
              << ", " << std::get<1>(t)
              << ", " << std::get<2>(t) << std::endl;
    return 0;
}

