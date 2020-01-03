#include <iostream>
#include "require.h"
#include <fstream>

using namespace std;

int main() {
  int i;
  string filename;
  cout<<"Enter Integer\n";
  cin>>i;
  cout<<"Enter filename\n";
  cin>>filename;
  ifstream fl;
  assure(fl, filename);
  bool t = (i < 10) && (i >= 5);
  require (t);
}
