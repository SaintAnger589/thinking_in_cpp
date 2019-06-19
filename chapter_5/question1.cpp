#include <iostream>

using namespace std;

class question1{
private:
  int b = 2;
public:
  int a = 3;
protected:
  int c = 4;
};


int main(){
  question1 q1;
  cout<<"public: "<<q1.a<<"\n";
  cout<<"private: "<<q1.b<<"\n";
  cout<<"protected: "<<q1.c<<"\n";

}
