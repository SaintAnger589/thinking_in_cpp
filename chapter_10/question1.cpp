#include <iostream>

using namespace std;

int f(int *iptr = 0);

int main(){
  //int *arr = new int[8];
  int arr[] = {1,2,3,4,5,6,-1,22};

  f(arr);
  int c;
  while ((c = f()) != 0){
    cout<<"c = "<<c<<'\t';
  }


  int arr2[] = {8,9,10,11,-1};
  c = f(arr2); //does not reassign the value
  //does not get printed
  while ((c = f()) != 0){
    cout<<"c = "<<c<<'\t';
  }

  cout<<"\n";
  return 0;
}

int f(int *iptr){
  static int* arr1;
  if (iptr){
    arr1 = iptr;
    //cout<<"arr1 = "<<*arr1+1<<"\n";
    return *arr1;
  }
  if (*arr1 == -1)
    return 0;
  return (*arr1++);
}
