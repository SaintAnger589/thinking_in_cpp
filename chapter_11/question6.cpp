//c type coding

#include <iostream>

using namespace std;

//c type pointer reference
void f(int **i){
  cout<<" i = "<<*(*i)<<"\n";
};

//C++ style
void increment(int *& j){
  j++;
}

int i = 47;
int *ip = &i;

int main(){
  f(&ip);
  int *p = 0;
  cout<<"p = "<<p<<endl;
  increment(p);
  cout<<"p = "<<p<<endl;
}
