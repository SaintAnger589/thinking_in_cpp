#include <iostream>

using namespace std;

class ques9{
public:
  void func1() const{
    cout<<"Inside func const\n";
  }
  void func2(){
    cout<<"inside non const function\n";
  }
};

void func3(ques9 q9){
  q9.func1();
  q9.func2();
}

void func4(ques9 &q9){
  q9.func1();
  //a non const object can call a const function
  q9.func2();
}

void func5(ques9 const &q9){
  q9.func1();
  //a const object reference can only call const functions
  //q9.func2();
}

int main(){
  const ques9 q9_const;
  ques9 q9_nconst;
  func3(q9_nconst);
  func4(q9_nconst);
  func5(q9_const);

}
