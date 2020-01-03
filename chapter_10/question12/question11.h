#ifndef q11_h
#define q11_h
#include <iostream>

using namespace std;

class q11{
  int a;
public:
  q11 (int x) : a(x){
  }
  void func1(int x){
    a = x;
  }
  void print() const{
    cout<<"a = "<<a<<"\n";
  }
};
#endif
