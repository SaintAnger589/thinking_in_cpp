

#include<iostream>

using namespace std;

class StringVector : public vector{
vector<void*> v;
public:
  void push_back(string *s){
    vector::push_back(s);
  }
  StringVector& operator[](){
    return
  }
}
