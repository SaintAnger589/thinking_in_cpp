#include <iostream>

using namespace std;

class X{
  X(X &);
public:
  int d;
  X(){
    d = 9;
  }
  X* clone() const{
    X* x1 = new X();
    x1->d = d;
    return x1;
  }
};

void func1(const X &x){
  X *x2 = new X();
  x2->clone();
  x2->d = 3;
  cout<<"x2->d = "<<x2->d<<"\n";
  delete x2;
}

int main(){
  X x;
  func1(x);
  cout<<"x2.d = "<<x.d<<"\n";

}
