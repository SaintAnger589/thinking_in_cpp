#include<iostream>

using namespace std;
struct X;

struct X{
private:
  int i;
public:
  friend void g(X*, int);
  void printx();
};

void g(X* x, int i){
  x->i = i;
}

void X::printx(){
  cout<<"i = "<<i<<"\n";
}
int main(){
  X x;
  g(&x, 3);
  x.printx();
  //cout<<"i = "<<x->i<<<"\n";
}
