
#include<fstream>
using namespace std;
ofstream out("order.out");

#define CLASS(ID) class ID{ \
  public: \
  ID(int) {out<< #ID " constructor\n";} \
  ~ID(){out<<#ID " destructor\n";} \
};

CLASS(Base1);
CLASS(Member1);
CLASS(Member2);
CLASS(Member3);
CLASS(Member4);
CLASS(Member5);
CLASS(Member6);

class Derived1: public Base1 {
Member1 m1;
Member2 m2;
public:
  Derived1(int): m2(1), m1(2), Base1(3) {
    out<<"Derived 1 constructor\n";
  }
  ~Derived1(){
    out<<"Derived1 destructor\n";
  }
};

class Derived2 : public Derived1 {
  Member3 m3;
  Member4 m4;
  public:
    Derived2() : m3(1), Derived1(2), m4(3){
      out<<"Derived2 constructor\n";
    }
    ~Derived2(){
      out<<"Derived2 destructor\n";
    }
};

class Derived3 : public Derived2 {
  Member5 m5;
  Member6 m6;
  public:
    Derived3() : m5(4), Derived2(), m6(5){
      out<<"Derived3 constructor\n";
    }
    ~Derived3(){
      out<<"Derived3 destructor\n";
    }
};
int main(){
  Derived3 d3;

}




