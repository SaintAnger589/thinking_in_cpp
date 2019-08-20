//: C07:SuperVar.cpp
// A super-variable
#include <iostream>
using namespace std;
#define CHECK_VARTYPE

enum VARTYPE {
character,
integer,
floating_point
}; // Define one

class SuperVar {
union { // Anonymous union
char c;
int i;
float f;
};

#ifdef CHECK_VARTYPE
  VARTYPE vartype;
#endif

public:
SuperVar(char ch);
SuperVar(int ii);
SuperVar(float ff);
void print(VARTYPE vartype);
};
SuperVar::SuperVar(char ch) {
vartype = character;
c = ch;
}
SuperVar::SuperVar(int ii) {
vartype = integer;
i = ii;
}
SuperVar::SuperVar(float ff) {
vartype = floating_point;
f = ff;
}
void SuperVar::print(VARTYPE vartype) {
switch (vartype) {
case character:
cout << "character: " << c << endl;
break;
case integer:
cout << "integer: " << i << endl;
break;
case floating_point:
cout << "float: " << f << endl;
break;
}
}
int main() {
SuperVar A('c'), B(12), C(1.44F);
A.print(character);
B.print(integer);
C.print(floating_point);
} ///:~
