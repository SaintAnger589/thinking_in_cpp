
#include<iostream>

using namespace std;

class Base{
int b;
public:
  void member1() const{
    cout<<"Base::member1() \n";
  }
};

class Derived : public Base{
int c;
public:
  void member2() const{
    cout<<"Derived::member2() \n";
  }
};

void nonmember1(Base b){
  cout<<"nonmember()\n";
  cout<<"sizeof(Base()) = "<<sizeof(b)<<endl;
}

int main(){
  Derived d;
  cout<<"sizeof derived object = "<<sizeof(d)<<endl;
  nonmember1(d);
}
