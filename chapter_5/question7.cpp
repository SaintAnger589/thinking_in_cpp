#include<iostream>

using namespace std;

class Hen{
public:
  void display(){
    cout<<"class Hen\n";
    cout<<"Hen::display()"<<endl; n.display();
    n.i = 20;
  }
  class Nest{
    friend Hen;
  private:
    int i = 10;
    void display(){
        cout<<"class Nest\n";
        cout<<"Nest::display()"<<endl;e.display();
    }
  public:
    class Egg{
      friend Nest;
    private:
      void display(){
        cout<<"class Egg\n";
      }
    public:
    } e;
  } n;
} h;


int main(){
  Hen h;
  Hen::Nest n;
  Hen::Nest::Egg e;
  h.display();
  //n.display();
  //e.setp(&n);
  //e.display();
  //n.displayval();
  //cout<<"i = "<<n.i<<"\n";
}
