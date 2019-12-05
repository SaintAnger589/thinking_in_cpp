#include <iostream>

using namespace std;

class X {
  float x;
  const float y;
public:
  X(float);
};

X::X(float a) : x(a), y(a) {}

int main() {
  X x(1);
}
