//: C03:FunctionTable.cpp
// Using an array of pointers to functions
#include <iostream>
#include <vector>
using namespace std;
// A macro to define dummy functions:
#define DF(N) void N() { \
cout << "function " #N " called..." << endl; }
DF(a); DF(b); DF(c); DF(d); DF(e); DF(f); DF(g);

typedef void (*func_table)();

class question27{
  vector<func_table> vec;
public:
  void add(func_table);
  void remove();
  void run();
};

void question27::add(func_table f){
  vec.push_back(*f);
}

void question27::remove(){
  vec.pop_back();
}

void question27::run(){
  int len = vec.size();
  int i;
  for(i=0;i<len;i++){
    (*vec[i])();
  }
}
int main() {
  question27 q27;
  q27.add(a);
  q27.add(b);
  q27.add(c);
  q27.run();
}
