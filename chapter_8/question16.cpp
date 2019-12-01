#include <iostream>

using namespace std;

void t (int *) {}

void u (const int *cip) {
  //! cip = 2;
  int i = *cip;
  //! int *ip2 = cip; //illegal non const
}

const char* v() {
  return "result of function v()";
}

const int* const w(){
  static int i;
  return &i;
}

int main() {
  int x = 0;
  int *ip = &x;
  const int *cip = &x;
  t(ip);
  //! t(cip);
  u(ip);
  u(cip);
  //! char *cp = v();
  const char *ccp = v();
  //! int *ip2 = w();
  const int* const ccip = w();
  const int* cip2 = w();
  //! *w() = 1;
}
