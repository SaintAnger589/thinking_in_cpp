#include <iostream>

using namespace std;

#define DEBUG(x) cout << #x " = " << x << endl

int main(){
  string s;
  cout<<"Enter a string\n";
  cin>>s;
  int len = s.length();
  int i = 0;
  while (len > 0){
    DEBUG(s);
    s.erase(s.begin());
    i++;
    len = s.length();
    cout<<"len = "<<len<<"\n";
  }
}
