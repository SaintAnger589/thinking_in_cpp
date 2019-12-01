#include <iostream>

using namespace std;

int main(){
  int d = 1;
  const int e =  2;
  int *u = &d;
  int *v = &e;
  int *w = (int *) &e;
}
