#include <iostream>

using namespace std;

class X {
  int i;
public:
  X(int ii = 0);
  void modify();
};

X::X(int ii) {i = ii;}

void X::modify() {i++;}

X f5() {
  return X();
}

const X f6() {
  return X();
}

void f7(X& x) {
  //pass by non const reference
  x.modify();
}

int main() {
  f5() = X(1); // ok, non -const return value
  f5().modify(); // ok
  // f7(f5()); //causes warning
  //causes compile time errors
  // f6() = X(1);
  // f6().modify();
   f7(f6());
}
