#include <iostream>

using namespace std;
class A;
class B;

class A{
private:
  int i =5;
public:
  friend void x(A *);
};

class B{
private:
  int i = 7;
public:
  friend void y(B *);
};

void x(A* b){
  //cout<<b->i<<"\n";
  cout<<"Class A\n";
  cout<<b->i<<"\n";
}

void y(B* a){
  //cout<<a->i<<"\n";
  cout<<"Class B\n";
  cout<<a->i<<"\n";
}

int main(){
  A a;
  B b;

  x(&a);
  y(&b);
}
