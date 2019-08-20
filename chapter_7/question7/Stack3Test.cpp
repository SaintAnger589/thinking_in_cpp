//: C06:Stack3Test.cpp
//{L} Stack3
//{T} Stack3Test.cpp
// Constructors/destructors
#include "Stack.h"
//#include "../require.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main(int argc, char* argv[]) {
//requireArgs(argc, 1); // File name is argument
ifstream in(argv[1]);

//assure(in, argv[1]);
//Stack textlines;
string lines[] = {"one", "two", "three"};
int sz = sizeof(lines) / sizeof(*lines);
cout<<"sz = "<<sz<<"\n";
// Read file and store lines in the stack:
//while(getline(in, line))

Stack textlines(lines, sz);
// Pop the lines from the stack and print them:
string* s;
while((s = (string*)textlines.pop()) != 0) {
cout << *s << endl;
//delete s;
}
} ///:~
