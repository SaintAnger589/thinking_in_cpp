#include <iostream>

using namespace std;

class ques21{
  ques21(ques21 &){
    cout<<"Copy constructor private\n";
  }
public:
  ques21(){
    cout<<"Constructor\n";
  }
};

void func1(ques21 q21){
  cout<<"function\n";
}

int main(){
  ques21 q21_1;
  func1(q21_1);
}
