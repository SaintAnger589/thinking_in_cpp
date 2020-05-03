#include <iostream>

using namespace std;
class question24{

public:
  double d;
  void print() const{
    cout<<"d = "<<d<<"\n";
  }
};

int main(){
  question24 q24, *q24_1 = &q24;
  double question24::*dp = &question24::d;
  void (question24::*printfunc)() const = &question24::print;
  q24_1->*dp = 47;
  (q24_1->*printfunc)();
}
