#include <iostream>

using namespace std;

class globe{
public:
  ~globe(){
    cout<<"~globe()\n";
    exit(1);
  }
};

globe g;

int main(){
  return 0;
}
