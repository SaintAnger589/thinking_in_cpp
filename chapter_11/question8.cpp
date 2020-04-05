#include <iostream>

using namespace std;


void f (char &c){
  c = 'f';
}

int main(){
  char c = 'm';
  cout<<"c in main = "<<c<<"\n";
  f(c);
  cout<<"c after func call = "<<c<<"\n";
}
