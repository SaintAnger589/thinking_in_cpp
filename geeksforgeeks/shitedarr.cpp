#include <iostream>
#include <vector>

using namespace std;

int findpivot(const vector<int> &arr, int start, int end){
  cout<<"start = "<<start<<"\n";
  cout<<"end = "<<end<<"\n";
  if (start >= end)
    return start;
  int pivot = (start + end) / 2;
  if (arr[pivot] > arr[pivot + 1] && arr[pivot] > arr[pivot-1])
    return pivot;
  else if (arr[pivot] < arr[start]){
    return findpivot(arr, 0, pivot);
  } else {
    return findpivot(arr, pivot+1, end);
  }
  return -1;
}
int getindex(const vector<int> &arr, int num, int start, int end){
  cout<<"getindex start = "<<start<<"\n";
  cout<<"getindex end = "<<end<<"\n";
  int pivot = (start + end) / 2;
  if (arr[pivot] == num)
    return pivot;
  if (start > end)
    return -1;
  else if(arr[pivot] > num && arr[0] < num){
    return getindex(arr, num,start , pivot);
  } else {
    return getindex(arr, num, pivot + 1, end);
  }
  return -1;
}
int shiftedArrSearch( const vector<int>& shiftArr, int num )
{
  // your code goes here
  int len = shiftArr.size();
  int pivind = len / 2;
  pivind = findpivot(shiftArr, 0, len-1);
  cout<<"pivot = "<<pivind<<"\n";
  int res = -1;
  if (num == shiftArr[pivind])
    return pivind;
  else if (num > shiftArr[0]){
    res = getindex(shiftArr, num, 0, pivind);
  } else {
    res = getindex(shiftArr, num, pivind, len-1);
  }
  return res;
}

int main() {
  const vector<int> shiftArr = {1,2,3,4,5,0};
  int num = 0;
  int res = shiftedArrSearch(shiftArr, num);
  cout<<"res = "<<res<<"\n";
  return 0;
}
