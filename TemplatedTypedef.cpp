// From https://isocpp.org/blog/2019/04/quick-q-cpp-template-typedef

template <size_t N> using Vector = Matrix<N, 1>;

// The type Vector<3> is equivalent to Matrix<3, 1>.
