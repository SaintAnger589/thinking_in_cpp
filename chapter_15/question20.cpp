
#include<iostream>
#include<ctime>
using namespace std;


class Base{
public:
virtual void f(){
  cout<<"Base::f() virtual \n";
}
void f2(){
  cout<<"Base::f2() \n";
}

};

class Derived1: public Base{
public:

};

int main(){
  Base *b = new Derived1;


  clock_t start = clock();
  b->f();
  clock_t stop = clock();
  double elapsed1 = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;

  start = clock();
  b->f2();
  stop = clock();
  double elapsed2 = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;

  cout<<"slapsed1 = "<<elapsed1<<"\n";
  cout<<"elapsed2 = "<<elapsed2<<"\n";
}
