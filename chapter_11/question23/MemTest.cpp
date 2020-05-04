//: C07:MemTest.cpp
// Testing the Mem class
//{L} Mem
#include "Mem.h"
#include <cstring>
#include <iostream>
using namespace std;
class MyString {
Mem* buf;
public:
MyString();
MyString(char* str);
~MyString();
void concat(char* str);
void print(ostream& os);
};
MyString::MyString() {
buf = 0; }
MyString::MyString(char* str) {
buf = new Mem(strlen(str) + 1);
strcpy((char*)buf->pointer(), str);
}
void MyString::concat(char* str) {
if(!buf) buf = new Mem;
strcat((char*)buf->pointer(
buf->msize() + strlen(str) + 1), str);
}
void MyString::print(ostream& os) {
if(!buf) return;
os << buf->pointer() << endl;
}
MyString::~MyString() { delete buf; }
int main() {
  char temp[] = "My test string";
MyString s(temp);
s.print(cout);
char temp1[] = " some additional stuff";
s.concat(temp1);
s.print(cout);
//MyString s2;
MyString s2 = s;
char temp2[] = " Using default constructor";
//s2.concat(temp2);
s2.print(cout);
} ///:~
