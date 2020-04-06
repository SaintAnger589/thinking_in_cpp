#include <iostream>

using namespace std;

class ques17{
  double* d;
public:
  ques17(double din){
    d = new double;
    *d = din;
  }

  ques17(ques17 &){
    d = new double;
  }

  ~ques17(){
    cout<<"value = "<<*d<<"\n";
    *d = -1;
    delete d;
    *d = 0;
  }
};

void f(ques17 q17){
  cout<<"function\n";
}

int main(){
  ques17 q17(17);
  f(q17);
}
