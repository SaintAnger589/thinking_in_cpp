#include <iostream>

using namespace std;


void func(int i){
  if (i == 0)
    return;
  else
    func(i--);
}

int main(){
  func(2);
}
