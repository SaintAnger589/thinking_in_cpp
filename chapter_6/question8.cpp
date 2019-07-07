#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
  string arr[] = {"Hello", "World", "buffalo"};
  int len = sizeof(arr)/sizeof(*arr);
  vector<string> v;
  int i;
  for(i=0;i<len;i++){
    v.push_back(arr[i]);
  }
  while(!v.empty()){
    cout<<v.back()<<"\n";
    v.pop_back();
  }
}
