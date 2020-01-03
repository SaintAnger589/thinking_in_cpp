#include <iostream>

using namespace std;


int fibonacci(bool reset = false);

int main(){
  bool r = false;
  int last = 10, i;
  for(i=0;i<last;i++){
    int res = fibonacci();
    cout<<"res = "<<res<<"\n";
  }
  r = true;
  fibonacci(r);
  for(i=0;i<last;i++){
    int res = fibonacci();
    cout<<"res = "<<res<<"\n";
  }
}

int fibonacci(bool reset){
  static int n1 = 1;
  static int n2 = 1;
  int n3;
  if (reset){
    n3 = 1;
  } else {
    n3 = n1 + n2;
  }
  n1 = n2;
  n2 = n3;
  return n3;
}
