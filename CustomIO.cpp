// Custom output operator
// https://learn.microsoft.com/en-us/cpp/standard-library/overloading-the-output-operator-for-your-own-classes?view=msvc-170
// Custom input operator
// https://learn.microsoft.com/en-us/cpp/standard-library/overloading-the-input-operator-for-your-own-classes?view=msvc-170

// overload_date.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

// The class for input and output
class Date {
  int mo, da, yr;

public:
  Date(int m, int d, int y) {
    mo = m;
    da = d;
    yr = y;
  }
  // Declarations for IO operators
  friend ostream &operator<<(ostream &os, const Date &dt);
  friend istream &operator>>(istream &is, Date &dt);
};

// Output operator
ostream &operator<<(ostream &os, const Date &dt) {
  os << dt.mo << '/' << dt.da << '/' << dt.yr;
  return os;
}

// Input operator
istream &operator>>(istream &is, Date &dt) {
  is >> dt.mo >> dt.da >> dt.yr;
  return is;
}

int main() {
  Date dt(5, 6, 92);
  cout << dt;
}
