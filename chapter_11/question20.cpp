#include <iostream>

using namespace std;

class ques20{
public:
  ques20(){
    cout<<"Constructor\n";
  }
};

ques20 func1(){
  ques20 q20_1;
  return q20_1;
}

void func2(const ques20 &q20_2){
  cout<<"func2()\n";
}

int main(){
  ques20 q20_3;
  cout<<"in main\n";
  func2(func1());
}
