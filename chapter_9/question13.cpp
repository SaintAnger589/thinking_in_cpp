#include <iostream>

using namespace std;

class C{
public:
  void f(){
    g();
  };
  void g(){
    cout<<"in function g()\n";
  }
};
int main(){
  C c;
  c.f();
}
