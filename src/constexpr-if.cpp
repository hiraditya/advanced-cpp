#include <iostream>
#include <tuple>

using namespace std;
// Partial template specialization.

int main() {
    auto f = [](){
        if constexpr(std::is_pointer<int>())
            return 10;
        else
            return "Ten";
    };

    std::cout <<" Value:" << f() << endl;

    return 0;
}
