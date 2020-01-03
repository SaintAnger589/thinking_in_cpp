#include <iostream>

using namespace std;

int main(){

  int **arr;
  cout<<"enter n, and k\n";
  int n, k, j;
  cin>>n>>k;
  arr = (int **) malloc(sizeof(int*)*(n+1));
  int i;
  for(i=0;i<n;i++){
    arr[i] = (int *) malloc(sizeof(int)*(k+1));
  }
  for(i=0;i<(k+1);i++){
    arr[i][0] = 0;
  }
  for(i=0;i<(n+1);i++){
    arr[0][i] = 1;
  }
  for(i=0;i<(k+1);i++){
    for(j=0;j<(n+1);j++){
        if (i > j)
          arr[i][j] = 0;
        else if (i != 0 && j != 0)
          arr[i][j] = arr[i][j-1] + i * arr[i-1][j-1];
      }
    }
  cout<<"printing results\n";
  for(i=0;i<(k+1);i++){
    for(j=0;j<(n+1);j++){
      cout<<arr[i][j]<<"\t";
    }
    cout<<"\n";
  }
  cout<<"permutation = "<<arr[k][n]<<endl;
}
