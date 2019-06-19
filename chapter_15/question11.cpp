
#include<iostream>
#include<vector>

using namespace std;

class Aircraft{
  int n;
  bool has_business_class;
  public:

    Aircraft(int num, bool present);
    void num_seats(int num){ n = num;}
    void business_class(bool present){has_business_class = present;}
    bool getbusiness(){return has_business_class;}
    int numseats(){return n;}
};

class Tower{
  vector<Aircraft *> craft;
  public:
    Tower(Aircraft *);
    Aircraft* getcraft();
};

Aircraft* Tower::getcraft(){
  Aircraft *a = craft.back();
  craft.pop_back();
  return a;
}
Aircraft::Aircraft(int num, bool present){
  cout<<"inside Aircraft constructor\n";
  n = num;
  has_business_class = present;

  Tower t(this);

}


Tower::Tower(Aircraft *a){
  cout<<"inside tower constructor\n";
  craft.push_back(a);
  int len = craft.size();
  int i;
  while (craft.size()){
    Aircraft *a = craft.back();
    craft.pop_back();
    cout<<a->getbusiness()<<"\n";
    cout<<a->numseats()<<"\n";
    if (a->getbusiness()){
      cout<<"the business class lounge close parking\n";
    }
    if (a->numseats() >= 150){
      cout<<"this is a big aircraft\n";
    }
  }
}

int main(){
  Aircraft a(170, true);
  Aircraft b(120, false);
  Aircraft c(130, true);
}
