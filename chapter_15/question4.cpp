#include <iostream>

using namespace std;

class A{
  int i;
  public:
    A(int ii): i(ii){}
    ~A(){}
    virtual void f() const {
      cout<<"A::f()\n";
    }
};

class B{
 int i;
 public:
   B(int ii): i(ii){}
   ~B(){}
   virtual void f() const{
     cout<<"B::f()\n";
   }

};

class C: public B{
  A a;
  public:
    C(int ii): B(ii), a(ii){}
    ~C() {}
    //void f() const {
      //a.f();
      //B::f();
    //}
};

int main(){
C c(47);
c.f();

}
