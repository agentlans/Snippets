// From https://en.cppreference.com/w/cpp/language/implicit_conversion :
// "An expression e is said to be implicitly convertible to T2 if and only if T2
// can be copy-initialized from e, that is the declaration T2 t = e; is
// well-formed (can be compiled), for some invented temporary t."

class MyInt {
public:
  template <class Other> void operator=(Other x) { this->x = x; }

private:
  int x;
};

int main() {
  MyInt x;
  x = 3.00;
}
