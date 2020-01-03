#include <iostream>

using namespace std;

int main(){
  int *arr;
  int n;
  cout<<"enter the number\n";
  cin>>n;
  arr = new int[n];
  arr[0] = 0;
  arr[1] = 1;
  int i;
  for(i=2;i<n;i++){
    arr[i] = arr[i-1] + arr[i-2];
  }
  cout<<arr[n-1]<<"\n";
}
