#include <iostream>

using namespace std;

float getbin(float n, float k){
  if (n == 1|| k == 0)
    return 1;
    return (n / k) * getbin(n-1, k-1);
}
int main(){
  cout<<"Enter n and k\n";
  float n, k;
  cin>>n;
  cin>>k;
  int res = getbin(n,k);
  cout<<"res = "<<res<<"\n";
}
