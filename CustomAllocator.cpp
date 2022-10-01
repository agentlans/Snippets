// From https://thealexcons.github.io/custom-memory-allocators/index.html

#include <cstdlib>
#include <new> // std::bad_alloc

// The following is a custom memory allocator with malloc() and free()
// Use like std::vector<int, SimpleAllocator<int>> vec;

template <typename T> class SimpleAllocator {
public:
  using value_type = T;

  SimpleAllocator() = default;

  template <typename U> SimpleAllocator(const SimpleAllocator<U> &other) {
    (void)other;
  }

  T *allocate(size_t n) {
    auto ptr = static_cast<T *>(malloc(sizeof(T) * n));
    if (ptr)
      return ptr;

    throw std::bad_alloc();
  }

  void deallocate(T *ptr, size_t n) {
    (void)n;
    free(ptr);
  }
};
