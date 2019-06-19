
#include<iostream>

using namespace std;

class A{
public:

A(){
  cout<<"A::A()\n";
}

};

class B{
public:
B(){
cout<<"B::B()\n";
}
};

class C : public A{
public:
B b;
};

int main(){
C c;

}
