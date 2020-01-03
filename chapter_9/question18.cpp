#include <iostream>

using namespace std;

#define FIELD(a) char *a##_string; int a##_size
#define INIT(a,b) a##_string = #a, a##size = b;

class Record{
public:
  FIELD(one,0);
  FIELD(two,1);
  Record(){
    INIT(one,4);
    INIT(two,5);
  }
  //one0_string = "Gaurav";
  void getval(int i){
    if(i == 1)
      cout<<one0_string;
    else
      cout<<two1_string;
  }
};

int main(){
  Record r;
  r.one0_string;
}
