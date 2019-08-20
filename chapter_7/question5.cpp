#include<iostream>
#include<string>

using namespace std;

class ques5{
private:

public:
  /*
  void func1(int a, int b){
    cout<<"func with 2 arguments\n";
  }
  */
  void func1(int a, int = 2){
    cout<<"func with 2 arguments\n";
  }
};

int main(){
  ques5 q5;
  q5.func1(1,2);

}
