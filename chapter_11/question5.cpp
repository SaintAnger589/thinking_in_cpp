#include <iostream>

using namespace std;

class question5 {
  int x;
public:
  question5(){}
  question5(question5& src): x(src.x){

  }
  void func1() const{
    cout<<"funct1()\n";
  };
  void func2() const {
    cout<<"func2()\n";
  };
  void func3() {
    cout<<"func3()\n";
  };
  void func4(){
    cout<<"func4()\n";
  };
};

void func(const question5 &a){
  a.func1();
  a.func2();
  //a.func3();
  //a.func4();
}



int main(){
  const question5 q5;
  func(q5);
}
