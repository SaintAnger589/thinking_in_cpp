#include <iostream>

using namespace std;

int& func(int &a){
  a = 14;
  return a;
}

int main() {
  int x = 0;
  const int &b = func(x);

  cout<<"b = "<<b<<"\n";
}
