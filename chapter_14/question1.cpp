
#include<iostream>

using namespace std;

class Vehicle{
int n;
public:
Vehicle(int num){
 n = num;
 cout<<"Vehicle::Vehicle()\n";
}
void vehicle_type(){
  cout<<"Vehicle::vehicle_type()\n";
}
void num_of_tyres(){
  cout<<"Vehicle::num_of_tyres()\n";
}
};

class Car: public Vehicle{
public:
Car(int n): Vehicle(n){
  cout<<"Car::Car()\n";
  //Vehicle::Vehicle(n);
}

};

int main(){
  Car c(6);
}
