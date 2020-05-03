//: C11:PmemFunDefinition.cpp
#include <iostream>

using namespace std;
class Simple2 {
public:
int f(float) const {
  cout<<"function with float argument\n";
  return 1; }
int f(int) const {
  cout<<"function with int argument\n";
  return 1;
}
};
int (Simple2::*fp)(float) const;
int (Simple2::*fp2)(int) const = &Simple2::f;
int (Simple2::*fp3)(float) const = &Simple2::f;
int main() {
 Simple2 s;
fp = &Simple2::f;
fp2 = &Simple2::f;

s.f(2);
(s.*fp3)(2);
} //
