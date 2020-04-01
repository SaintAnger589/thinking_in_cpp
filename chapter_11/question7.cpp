#include <iostream>

using namespace std;

void f(int *& i){
  i++;
  cout<<"i = "<<i<<"\n";
}

int main(){
  int h = 10;
  int *p = &h;
  f(p);
  cout<<"p = "<<*p<<"\n";
}
