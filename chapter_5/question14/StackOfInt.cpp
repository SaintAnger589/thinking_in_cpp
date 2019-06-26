


#include "StackOfInt.h"

using namespace std;

class StackImp {
private:
  int a[2];
};

StackOfInt::StackOfInt(){
  StackImp *smile = new StackImp;
}

void initialize() {
  smile->a[0] = 1;
  smile->a[1] = 2;
}

void cleanup() {
  delete smile;
}

int StackOfInt::read1() {
  return smile->a[0];
}


int StackOfInt::read2() {
  return smile->a[1];
}
 ///:~
