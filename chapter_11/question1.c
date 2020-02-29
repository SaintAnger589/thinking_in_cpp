#include <stdio.h>

struct bird{
};

struct rock{
};


int main(){
  struct bird* b;
  struct rock* r;
  void* v;
  v = r;
  b = v;
}
