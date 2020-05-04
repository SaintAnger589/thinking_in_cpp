//Mem.cpp
#include "Mem.h"
#include <cstring>
using namespace std;
Mem::Mem() { mem = 0; size = 0; }
Mem::Mem(int sz) {
mem = 0;
size = 0;
ensureMinSize(sz);
}
Mem::Mem(Mem &, char str[] = "" const){
  Mem *buf = new Mem();
  strcat((char*)buf->pointer(
  buf->msize() + strlen(str) + 1), str);
}
Mem::~Mem() { delete []mem; }
int Mem::msize() { return size; }
void Mem::ensureMinSize(int minSize) {
if(size < minSize) {
byte* newmem = new byte[minSize];
memset(newmem + size, 0, minSize - size);
memcpy(newmem, mem, size);
delete []mem;
mem = newmem;
size = minSize;
}
}
byte* Mem::pointer() { return mem; }
byte* Mem::pointer(int minSize) {
ensureMinSize(minSize);
return mem;
} ///:~
