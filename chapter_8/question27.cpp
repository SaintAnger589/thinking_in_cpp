#include <iostream>

using namespace std;

class X{
  volatile int x;
  int y;
public:
  X(int ii);
  void printval() volatile;
  void changeval();
};

X::X(int ii): x(ii), y(ii) {}

void X:: printval() volatile {
  x = 4;
  cout<<"value of x = "<<x<<"\n";
}

void X::changeval() {
  x = 5;
  cout<<"value of x = "<<x<<"\n";
}

int main() {
  volatile X j(88);
  X k(99);
  j.printval();
  //j.changeval();
  k.printval();
  k.changeval();
}
