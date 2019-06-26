#include<iostream>
#include "Stack.h"

using namespace std;

class Hen{
private:
  int i;
public:

  void setval(int j){
    cout<<"In setval\n";
    this->i = j;
  }

  void display(){
    cout<<"class Hen\n";
    cout<<"Hen::display()"<<endl;
    cout<<"this->i = "<<i<<endl;
    n.display();
  }
  class Nest{
    friend Hen;
  private:
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
  Hen *h = new Hen;
  Hen::Nest n;
  Hen::Nest::Egg e;
  h->setval(10);
  h->display();
  int len = sizeof(h);
  //creating Stash object
  Stack *s = new Stack;
  s->initialize();
  s->push((void*)h);

  Hen *h1 = new Hen;


  h1->setval(50);
  h1->display();

  //s.initialize(len);
  s->push((void *)h1);
  size_t count = sizeof(s)/sizeof(s[0]);
  //cout<<"count = "<<count()<<"\n";
  int k = 0;

  for(size_t i=0; i<count;i++){
    //Hen *h3 = new Hen;
    Hen *h3 = (Hen *)s->pop();
    h3->display();
  }
  //cout<<"h3->i = "<<h3->i<<endl;
  //n.display();
  //e.setp(&n);
  //e.display();
  //n.displayval();
  //cout<<"i = "<<n.i<<"\n";
}
