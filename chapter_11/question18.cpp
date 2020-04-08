#include <iostream>

using namespace std;

class ques18 {
public:
  ques18(){
    cout<<"Constructor\n";
  }
  ques18(ques18 &, int d = 0){
    cout<<"Copy constructor with extra argument\n";
  }
};


void func(ques18 q18){
  cout<<"inside function\n";
}

int main(){
  ques18 q18;
  func(q18);
}
