#include <iostream>

using namespace std;

#define x
#define b
#define a 0xff
#define FLOOR(x,b) x>=b?0:1

int main(){
  cout<<(FLOOR(a&0x0f, 0x07))<<"\n";
  if (FLOOR(a&0x0f, 0x07)) {
    cout<<"floor true\n";
  } else {
    cout<<"floor false\n";
  }
}
