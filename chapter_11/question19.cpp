#include <iostream>

using namespace std;

class ques19_1{
public:
  ques19_1(){
    cout<<"ques19_1\n";
  }
  ques19_1(ques19_1 &){
    cout<<"copy constructor ques19_1\n";
  }
};

class ques19_2{
public:
  ques19_1 q19_1_1;
};

void func(ques19_2 q19_2){
  cout<<"inside function\n";
}

int main(){
  ques19_2 q19_2;
  func(q19_2);
}
