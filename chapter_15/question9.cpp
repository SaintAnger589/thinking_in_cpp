


#include<iostream>
#include<vector>

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

    virtual ~Rodent(){
      cout<<"Rodent::~Rodent()\n";
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

    ~Mouse(){
      cout<<"Mouse::~Mouse()\n";
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
    ~Gerbil(){
      cout<<"Gerbil::~Gerbil()\n";
    }
};

class Hamster: public Rodent{
  public:
    void eats() const{
      cout<<"Hamster::eats()\n";
    }
    void sleep() const{
      cout<<"Hamster::sleep()\n";
    }
    void walk() const{
      cout<<"Hamster::walk()\n";
    }
    ~Hamster(){
      cout<<"Hamster::~Hamster()\n";
    }
};

class BlueHamaster : public Hamster{
  public:
    void eats() const{
      cout<<"Blue::eats()\n";
    }
    void sleep() const{
      cout<<"Blue::sleep()\n";
    }
    void walk() const{
      cout<<"Blue::walk()\n";
    }
    ~BlueHamaster(){
      cout<<"BlueHamster::~BlueHamster()\n";
    }
};

int main(){
vector<Rodent *> r;
r.push_back(new Mouse);
r.push_back(new Gerbil);
r.push_back(new BlueHamaster);
int i;
  for (i=0;i<3;i++){
    r[i]->eats();
    r[i]->sleep();
    r[i]->walk();
  }

  for(i=0;i<3;i++){
    delete(r[i]);
  }
}
