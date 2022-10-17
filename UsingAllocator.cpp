#include <iostream>
#include <memory> // std::allocator

// How to use an allocator instead of C++ new, delete.

int main() {
  // Create allocator instance
  auto allo = std::allocator<int>();
  int *arr = allo.allocate(10); // like new int[10];
  // Do stuff with the array
  for (int i = 0; i < 10; ++i) {
    arr[i] = i;
  }
  for (int i = 0; i < 10; ++i) {
    std::cout << arr[i] << " ";
  }
  allo.deallocate(
      arr, 10); // like delete[] arr;
                // 10 is a hint to the allocator object. Can be another number.
}