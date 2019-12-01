#include <iostream>

using namespace std;

void t (int &) {}

void u (const int &cip) {
  //! cip = 2;
  int i = cip;
  int ip2 = cip; //illegal non const

  cout<<"i = "<<i<<"\n";
  ip2 = 4;
  cout<<"ip2 = "<<ip2<<"\n";
}

const char* v() {
  return "result of function v()";
}

const int& w(){
  static int i;
  return i;
}

int main() {
  int x = 0;
  int *ip = &x;
  const int *cip = &x;
  t(x);
  //! t(cip);
  u(x);
  u(x);
  //! char *cp = v();
  //const char *ccp = v();
  //! int *ip2 = w();
  //const int* const ccip = w();
  //const int* cip2 = w();
  //! *w() = 1;
}
