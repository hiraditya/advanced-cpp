#include <iostream>
#include <tuple>

using namespace std;
template<class Tuple, std::size_t N>
struct TuplePrinter {
    static void print(const Tuple& t) {
        TuplePrinter<Tuple, N-1>::print(t);
        std::cout << "," << std::get<N-1>(t);
    }
};

template<class Tuple> // partial template specialization
struct TuplePrinter<Tuple, 1> {
    static void print(const Tuple& t) {
        std::cout << std::get<0>(t);
    }
};

template<class... Args> // Variadic template
void print(const std::tuple<Args...>& t) {
    std::cout << "(";
    TuplePrinter<decltype(t), sizeof...(Args)>::print(t);
    std::cout << ")\n";
}

int main() {
    tuple <int, char, double, char> t{100, 'A', 1.0, 'B'};
    std::cout << "Value-initialized: "; print(t);
    return 0;
}
