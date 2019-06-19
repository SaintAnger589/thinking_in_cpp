
#include<iostream>

using namespace std;

class A{
int i;
public:
  A(int ii):i(ii){
    cout<<"A::A()\n";
  }
  ~A(){
    cout<<"A::~A()\n";
  }
  void f() const{}
};

class B{
int i;

public:
B(int ii):i(ii){
cout<<"B::B()\n";
}
~B() {
  cout<<"B::~B()\n";
}
void f() const{}
};

class C: public B{
A a;
public:
C(int ii): B(ii), a(ii){
  cout<<"C::C()\n";
}
~C(){
  cout<<"C::~C()\n";
}
void f() const {
  a.f();
  B::f();
}
};

class D: public B{
  C c;
  public:
  //composition object constructor is always called.
  //Even if it is called by the inheritence
  D(int ii): c(ii), B(ii){
    cout<<"D::D()\n";
  }
  ~D(){
    cout<<"D::~D()\n";
  }
};

int main(){
C c(47);
D d(50);
}

