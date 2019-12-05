#include <iostream>

using namespace std;

class X {};

X f() {return X();} //return by value

void g1(X&) {} //pass by non const reference
void g2(const X&) {} //pass by const reference

int main(){
  // error const temporary created by f()
  g1(f());
  //ok: g2 takes const reference
  g2(f());
}
