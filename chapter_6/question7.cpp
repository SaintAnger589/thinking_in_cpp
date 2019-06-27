#include<iostream>

using namespace std;

int main(){
  double arr[3] = {0};
  double arr2[] = {1,2,3};
  int len = sizeof(arr)/sizeof(*arr);
  int len2 = sizeof(arr2)/sizeof(*arr2);
  int i;
  for(i=0;i<len;i++)
    cout<<arr[i]<<"\t";
  cout<<"\n";
  for(i=0;i<len2;i++)
    cout<<arr2[i]<<"\t";
  cout<<"\n";
}
