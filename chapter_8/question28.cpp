#include <iostream>

using namespace std;

class bird{
public:
  void fly(){
    cout<<"birds can fly\n";
  }
};

class rock {
public:
  void fly() {
    cout<<"rocks cannot fly\n";
  }
};

int main() {
  rock r;
  r.fly();
  void *temp = &r;
  bird *b = (bird*) temp;
  b->fly();
}
