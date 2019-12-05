#include <iostream>

using namespace std;

class X{
  int i;
public:
  X(int);
  int f1() const;
  void f2(int i);
};

X::X(int ii): i(ii) {}

int X::f1() const {
  cout<<"inside f1\n";
  //f2(i);
  return i;

}

void X::f2(int j) {
  cout<<"inside f2\n";
  j = 2;
}

int main() {
  X x(1);
  x.f1();
  x.f2(4);
  x.f2(x.f1());
}
