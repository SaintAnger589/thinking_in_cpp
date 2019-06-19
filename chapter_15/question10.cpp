#include<iostream>
#include<vector>

using namespace std;

class Rodent {
  public:
    virtual void eats() = 0;
    virtual void sleep() = 0;
    virtual void walk()  = 0;

    virtual ~Rodent();
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
  Mouse m;
  m.eats();
}


