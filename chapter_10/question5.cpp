#include <iostream>

using namespace std;

class Monitor{
  static int num; //wants static because
                  //we have to give total
                  //incidents by all objects
public:
  Monitor() {}
  void incident(){++num;}
  void decrement(){--num;}
  void printincident(){
    cout<<"number = "<<num<<"\n";
  }
};

class Monitor2{
  Monitor *m;

public:
  Monitor2() : m(new Monitor){
    m->incident();
    m->printincident();
  }
  ~Monitor2(){
    m->decrement();
    m->printincident();
  }
};


int Monitor::num = 0;

void callMonitor(){
  static Monitor m;
  static Monitor2 m2;
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
