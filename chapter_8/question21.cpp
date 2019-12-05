#include <iostream>

using namespace std;

class x{
  const int t;
  enum { size = 10 };
  int u[size];
public:
  x(int i);
};

x::x(int i): t(i){}

int main(){
  x(1);
}
