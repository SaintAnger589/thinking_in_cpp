#include<iostream>

using namespace std;

class A{
public:
  A(){
    cout<<"Class A constrauctor\n";
  }
};

class B{
public:
  A a;
  B(){
    cout<<"Class B constrauctor\n";
  }
};

int main(){
  B b;
}
