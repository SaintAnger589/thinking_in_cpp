#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void populate_temp(vector<int> &t, int i, int j, int k, int l){
  t.push_back(i*i);
  t.push_back(i*j);
  t.push_back(i*k);
  t.push_back(i*l);
  t.push_back(j*j);
  t.push_back(j*k);
  t.push_back(j*l);
  t.push_back(k*k);
  t.push_back(k*l);
  t.push_back(l*l);
}
int getmin(vector<int> &t){
  int minval = INT_MAX;
  vector<int>::iterator it;
  for(it = t.begin(); it != t.end();++it){
    if (*it < minval)
      minval = *it;
  }
  return minval;
}
int getindex(vector<int> &temp, int val){
  vector<int>::iterator it;
  int count = 0;
  //cout<<"val = "<<val<<"\n";
  for(it = temp.begin(); it != temp.end();++it){
    //cout<<"*it = "<<*it<<"\n";
    if (*it == val)
      return count;
    count++;
  }
  return -1;
}
void printvec(vector<int> &temp){
  vector<int>::iterator it;
  for(it = temp.begin();it != temp.end();++it){
    cout<<*it<<"\t";
  }
  cout<<"\n";
}
int main(){
  int i = 1, j = 2, k = 3, l = 5;
  vector<int> temp;
  vector<int> res;
  //res.push_back(1);
  int n;
  //cout<<"enter index\n";
  cin>>n;
  populate_temp(temp, i, j, k, l);
  while(res.size() < n){
    int min = getmin(temp);
    cout<<"min = "<<min<<"\n";
    if (i*i == min && i != 1){
      i = min;
      temp.push_back(i*i);
    }
    else if (j*j == min){
      j = min;
      temp.push_back(j*j);
    }

    else if (k*k == min){
      k = min;
      temp.push_back(k*k);
      }

    else if(l*l == min){
      l = min;
      temp.push_back(l*l);
    }

    res.push_back(min);
    printvec(temp);
    int ind = getindex(temp, min);
    //cout<<"index = "<<ind<<"\n";
    temp.erase(temp.begin() + ind);
  }
  cout<<res[n - 1];

}
