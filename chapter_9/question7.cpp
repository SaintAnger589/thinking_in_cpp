#include <iostream>
#include <cstring>

using namespace std;

class C{
  char d[100];
public:
  C(char f = ' ') {memset(d,f,100);}
  void print() {cout<<d<<"\n";}
};

int main(){
  C c('z');
  c.print();
}
