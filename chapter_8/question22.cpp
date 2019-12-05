#include <iostream>

using namespace std;

class X{
  int i;
public:
  X(int ii);
  int f() const;
};

X::X(int ii): i(ii) {}
int X::f() {return i;}

int main(){
  X x1(10);
  const X x2(29);
  x1.f();
  x2.f();
}
