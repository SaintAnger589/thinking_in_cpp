/**
Modify Cheshire in Handle.cpp, and verify that your project manager recompiles
and relinks only this file, but doesn’t recompile UseHandle.cpp.
**/
#include "StackOfInt.h"

int main() {
  StackOfInt *u = new StackOfInt;
  u->initialize();
  u->read1();
  u->read2();
  //u.change(1);
  u->cleanup();
} ///:~
