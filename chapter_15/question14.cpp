#include<iostream>
#include <string>

using namespace std;

class Pet{
  string pname;
  public:
    //Pet(const string & petName) : pname(petName){}
    virtual string name() = 0;
    virtual string speak() const  = 0;
};

string Pet::name(){
cout<<"Pet::name()\n";
return pname;
}
string Pet::speak() const{
cout<<"Pet::speak()\n";
return "";
}

class Dog : public Pet {
  string dname;
  public:
    Dog(const string& petName) : dname(petName){
    cout<<"Dog::constructor"<<petName<<endl;
    }
    string name(){
    cout<<dname + " is my name\n";
    }
    //New Virtual function in the Dog Class
    string sit() const {
      return dname + "sits";
    }
    string speak() const { //override
      return dname + "says 'Bark!'";
    }
};

int main(){
  Pet *p = {new Dog("bob")};
  cout<<"p[0]->speak() = "<<p->speak()<<endl;
  //cout<<"p[1]->speak() = "<<p[1]->speak()<<endl;

}
