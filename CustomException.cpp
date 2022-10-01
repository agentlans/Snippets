// Custom exceptions
// https://peterforgacs.github.io/2017/06/25/Custom-C-Exceptions-For-Beginners/

#include <exception>
#include <iostream>

struct MyException : public std::exception {
  const char *what() const throw() { return "C++ Exception"; }
}
