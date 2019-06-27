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
  int i;
  for (int i=0;i<3;i++){
    Simple s(i);
    goto x;
  }
  x: cout<<"\n";
}
