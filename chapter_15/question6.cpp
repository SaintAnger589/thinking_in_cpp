
#include<iostream>

using namespace std;

class Rodent {
  public:
    virtual void eats() const{
      cout<<"Rodent::eats()\n";
    }
    virtual void sleep() const{
      cout<<"Rodent::sleep()\n";
    }
    virtual void walk() const{
      cout<<"Rodent::walk()\n";
    }
};

class Mouse: public Rodent{
  public:
    void eats() const{
      cout<<"Mouse::eats()\n";
    }
    void sleep() const{
      cout<<"Mouse::sleep()\n";
    }
    void walk() const{
      cout<<"Mouse::walk()\n";
    }
};

class Gerbil: public Rodent{
  public:
    void eats() const{
      cout<<"Gerbil::eats()\n";
    }
    void sleep() const{
      cout<<"Gerbil::sleep()\n";
    }
    void walk() const{
      cout<<"Gerbil::walk()\n";
    }
};

int main(){
  Rodent *r[] = {new Mouse, new Gerbil};
  for (int i=0;i<2;i++){
    r[i]->eats();
    r[i]->sleep();
    r[i]->walk();
  }
}
