#include <iostream>

using namespace std;

class q3{
  int *arr;
  static const int size = 3;
  const int q;
  static int y;
public:
  q3(int u = 5): q(u) {
    arr = new int[size];
    //arr = {1,2,3};
  }
  static void printnum(){
    cout<<"y = "<<q3::y<<"\n";
  };
  inline void print(){
    int i;
    for(i=0;i<size;i++){
      cout<<"arr[ "<<i<<"] = "<<arr[i]<<"\n";
    }
    printnum();
  }
};

int q3::y = 7;

int main(){
  q3 q3;
  q3.print();
}
