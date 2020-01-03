#include <iostream>

using namespace std;

class Monitor{
  static int num; //wants static because
                  //we have to give total
                  //incidents by all objects
public:
  Monitor() {}
  void incident(){++num;}
  void printincident(){
    cout<<"number = "<<num<<"\n";
  }
};

int Monitor::num = 0;

void callMonitor(){
  static Monitor m;
  m.incident();
  m.printincident();
}

int main(){
  int i = 0;
  while (i<10){
    i++;
    callMonitor();
  }
}
