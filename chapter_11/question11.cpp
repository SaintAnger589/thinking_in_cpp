#include <iostream>

using namespace std;

void func(char c, int i, float f, double d){
  cout<<"Inside function()\n";
}


int main(){
  func('s', 20, 20.4, 345);
}
