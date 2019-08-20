#include <iostream>
#include <string>

using namespace std;

class ques4{
private:


public:
  /*
  void func(){
    cout<<"0 input member function\n";
  }
  void func(int a){
    cout<<"1 input member function\n";
  }
  void func(int a, int b){
    cout<<"2 input member function\n";
  }
  void func(int a, int b, int c){
      cout<<"3 member function object\n";
  }
  */
  void func(int a = 1, int b = 2, int c = 3){
    cout<<"defaulted value function\n";
  }
};


int main(){
  ques4 q4;
  q4.func();
  q4.func(2);
  q4.func(3,4);
  q4.func(6,7,8);

}
