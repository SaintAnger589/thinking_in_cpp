//: C10:StaticDestructors.cpp
// Static object destructors
#include <fstream>
using namespace std;
extern ofstream out;
class Obj {
char c; // Identifier
public:
Obj(char cc) : c(cc) {
out << "Obj::Obj() for " << c << endl;
}
~Obj() {
out << "Obj::~Obj() for " << c << endl;
}
};
Obj a('a'); // Global (static storage)
// Constructor & destructor always called
ofstream out("statdest.out"); // Trace file
void f() {
static Obj b('b');
}
void g() {
static Obj c('c');
}
int main() {
out << "inside main()" << endl;
g(); //not called
f(); // Calls static constructor for b

out << "leaving main()" << endl;
} ///:~
