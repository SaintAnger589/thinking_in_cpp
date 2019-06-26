#include<iostream>

using namespace std;

class Hen{
public:
  void display(){
    cout<<"class Hen\n";
  }
  class Nest{
  public:
    void display(){
        cout<<"class Nest\n";
    }
    class Egg{
    public:
      void display(){
        cout<<"class Egg\n";
      }
    };
  };
};


int main(){
  Hen h;
  Hen::Nest n;
  Hen::Nest::Egg e;
  h.display();
  n.display();
  e.display();
}
