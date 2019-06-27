#include<iostream>

using namespace std;

class Simple{
  int i;
public:
  Simple(int j){
    cout<<"constructor called\n";
    i = j;
    cout<<"i = "<<i<<"\n";
  }
  ~Simple(){
    cout<<"i = "<<i<<"\n";
    cout<<"destructor called\n";
  }
};

int main(){
  Simple s(3);
}
