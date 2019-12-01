#include <iostream>

using namespace std;

int main() {

  const char arr[100] = "apple is good";
  cout<<"current char = "<<arr<<"\n";
  arr[5] = "e";
  cout<<arr<<"\n";
}
