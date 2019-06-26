#include<iostream>

using namespace std;

class example{
private:
  int i = 10;
protected:
  int j = 20;
public:
  int k = 30;
  void showmap(){
    cout<<"private i = "<<&i<<"\n";
    cout<<"protected j = "<<&j<<"\n";
    cout<<"public i = "<<&k<<"\n";
  }

};

int main(){
  example e;
  e.showmap();
}
