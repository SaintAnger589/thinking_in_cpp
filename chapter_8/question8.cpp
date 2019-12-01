#include <iostream>

using namespace std;

int main() {

  const long a = 1111;
  const long b[4] = {1,2,3,4};
  const long* c = &a;
  long const* d = b;

  int i;
  cout<<"1st value"<<(*d)<<"\n";
  cout<<"2nd value"<<(*(d+1))<<"\n";
  //*(d+1) = 6;
}
