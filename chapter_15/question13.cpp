#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Pet{
public:
  //Pet(){cout<< "Woof"<<endl;}
  virtual string speak() const  = 0;
};

class Dog : public Pet{
  public:
    string speak() const {return "Bark! ";}
};

int main(){
Dog ralph;
Pet *p1 = &ralph;
Pet &p2 = ralph;
//Pet p3;
//Pet *p4;
//late binding for both
cout<<"p1->speak() = "<<p1->speak()<<endl;
cout<<"p2->speak() = "<<p2.speak()<<endl;
//early binding (probably)
cout<<"p3.speak() = "<<p3.speak()<<endl;

}
