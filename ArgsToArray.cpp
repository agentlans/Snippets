#include <iostream>
#include <array>

// Copies a parameter pack to a std::array

typedef unsigned long int luint;

// Recursive cases
template <luint i, class T, luint n, class... Ts>
void convert_tmp(std::array<T,n>& arr) {}

template <luint i, class T, luint n, class... Ts>
void convert_tmp(std::array<T,n>& arr, const T& x, const Ts&... args...) {
    std::get<i>(arr) = x;
    convert_tmp<i+1>(arr, args...);
}

// Initial call
template <class T, luint n, class... Ts>
void convert(std::array<T,n>& arr, const T& x, const Ts&... args...) {
    static_assert(sizeof...(args) == n-1);
    convert_tmp<0>(arr, x, args...);
}

int main() {
    std::array<int,3> foo;
    convert(foo, 1, 2, 3); // the arguments are copied to foo
    std::cout << std::get<0>(foo) << "\t" << 
        std::get<1>(foo) << "\t" << 
        std::get<2>(foo) << std::endl;
}
