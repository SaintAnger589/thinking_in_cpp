#include <iostream>

using namespace std;

class X{
  int i;
  const int j;
public:
  X(int ii);
  void f1();
  void f2() const;
};

X::X(int ii): i(ii), j(ii){}

void X::f1() {
  cout<<"function f1\n";
}
void X:: f2() const {
  cout<<"function f2\n";
}

int main(){
  X x1(1);
  const X x2(2);
  x1.f1();
  x1.f2();
  //x2.f1();
  x2.f2();
}
