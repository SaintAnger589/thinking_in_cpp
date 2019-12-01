#include <iostream>

using namespace std;

void printfloat(float a){
  const float &b = a;

  //b++;
  cout<<"value = "<<b<<"\n";
}

int main(){
  printfloat(4);
}
