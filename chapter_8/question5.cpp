#include <iostream>
#include <ctime>

using namespace std;

int main(){
  const float c = time(0);
  cout<<"current c value = "<<c<<"\n";
  //wait for some time
  for (int i = 0, j = 0; i < 1000000000; i++)
    j++;
  c = time(0);
}
