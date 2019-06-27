//: C05:Handle.cpp {O}
// From Thinking in C++, 2nd Edition
// Available at http://www.BruceEckel.com
// (c) Bruce Eckel 2000
// Copyright notice in Copyright.txt
// Handle implementation
#include "Handle.h"
#include<iostream>
using namespace std;
// Define Handle's implementation:
struct Handle::Cheshire {
  int i;
  int j;
};

Handle::Handle(){
  cout<<"Constructor called\n";
    smile = new Cheshire;
    smile->i = 1;
    smile->j = 2;
}


Handle::~Handle() {
  cout<<"destructor call\n";
  delete smile;
}

int Handle::read() {
  return smile->i;
}

void Handle::change(int x) {
  smile->i = x;
} ///:~
