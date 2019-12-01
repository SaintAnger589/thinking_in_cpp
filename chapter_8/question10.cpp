#include <iostream>

using namespace std;

int main(){
  const int i = 10;
  const int k = 20;
  int const* j = &i;

  cout<<"value of the const pointer = "<<*j<<"\n";
  //*j = &k;
  //cout<<"value of the const pointer = "<<*j<<"\n";
}
