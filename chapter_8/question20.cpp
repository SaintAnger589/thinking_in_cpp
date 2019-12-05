//: C08:StringStack.cpp
// Using static const to create a
// compile-time constant inside a class
#include <string>
#include <iostream>
#include <cstring>

using namespace std;
class MyString {
  string s;
public:
  MyString();
  MyString(string p);
  void printString();
};

MyString :: MyString(): s("") {}
MyString :: MyString(string i): s(i){}

void MyString :: printString(){
  cout<<s<<"\n";
}

class StringStack {
static const int size = 100;
MyString *myString;
MyString* stack[size];
int index;
public:
StringStack();
void push(MyString* s);
MyString* pop();
};
StringStack::StringStack() : index(0) {
memset(stack, 0, size * sizeof(MyString*));
}
void StringStack::push(MyString* s) {
  s->printString();
if(index < size)
stack[index++] = s;
}
MyString* StringStack::pop() {
if(index > 0) {
MyString* rv = stack[--index];
stack[index] = 0;
rv->printString();
return rv;
}
return 0;
}
MyString iceCream[] = {
MyString("pralines & cream"),
MyString("fudge ripple"),
MyString("jamocha almond fudge"),
MyString("wild mountain blackberry"),
MyString("raspberry sorbet"),
MyString("lemon swirl"),
MyString("rocky road"),
MyString("deep chocolate fudge")
};
int iCsz =sizeof iceCream / sizeof *iceCream;
int main() {
StringStack ss;
for(int i = 0; i < iCsz; i++){
  //MyString(iceCream[i]);
  //MyString m(&iceCream[i]);
  ss.push(&iceCream[i]);
}

MyString *cp;
while((cp = ss.pop()) != 0){
  cp->printString();
}

//cout << m->printString() << endl;
} ///:~
