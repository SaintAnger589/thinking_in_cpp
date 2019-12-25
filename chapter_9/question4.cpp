#include <iostream>
#include <ctime>

using namespace std;

class a{
public:
  inline int f1(int x) { return ++x;}
  int f2(int x);
};

int a::f2(int x) {
  return ++x;
}

int main(){
  //calling inline function 100 ctime
  a a;
  int i;
  time_t t_initial;
  t_initial = clock();
  //cout<<"time startting"<<time();
  for(i=0;i<10000000;i++){
    a.f1(i);
  }
  cout<<"time lapsed = "<<(clock() - t_initial)<<"\n";
  t_initial = clock();
  for(i=0;i<10000000;i++){
    a.f2(i);
  }
  cout<<"clock_lapsed =  "<<(clock() - t_initial)<<"\n";

}
