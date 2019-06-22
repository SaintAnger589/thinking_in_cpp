#include<iostream>

using namespace std;

class A;
class B;
class C;

class C{
public:
  void f(A*);
};

class B{
public:
  void fB(A *);

};

class A{
private:
  int i = 5;
public:
  friend class B;
  friend void C::f(A *);
};

void C::f(A *a){
  cout<<"i = "<<a->i<<"\n";
}

void B::fB(A *a){
  cout<<"i="<<a->i<<"\n";
}
int main(){
  A a;
  B b;
  C c;
  c.f(&a);
  b.fB(&a);
}
