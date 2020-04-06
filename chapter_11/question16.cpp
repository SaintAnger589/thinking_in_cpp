#include <iostream>

using namespace std;

class question16{

public:
  int d;
  question16() : d(0){}
  question16(const question16&){
    cout<<"Copy contructor question16\n";
  }
};

void func1(question16 q16){
  cout<<"func1()\n";
}

question16 func2(){
  cout<<"func2()\n";
  question16 q16_1;
  q16_1.d = 5;
  return q16_1;
}

int main(){
  question16 q16_2;
  //func1(q16_2);
  q16_2 =func2();
  cout<<"number = "<<q16_2.d<<"\n";
}
