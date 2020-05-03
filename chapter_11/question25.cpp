#include <iostream>

using namespace std;

class question25{
public:
  int arr[5];
  question25() {
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;
  }
};

int main(){
  question25 q25;
  int (question25::*a)[5] = &question25::arr;
  int i;
  for(i=0;i<5;i++){
    cout<<(q25.*a)[i]<<"\n";
  }
}
