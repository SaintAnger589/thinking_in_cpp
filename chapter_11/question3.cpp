#include <iostream>

using namespace std;

int main(){
  const int &a = 12;
  int x =0;
  //a = &x;
  //a = 12;
  cout<<"a = "<<a<<"\n";
}
