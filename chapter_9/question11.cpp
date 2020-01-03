#include<iostream>
#include<cstring>

using namespace std;

enum Hue {red = 0, green = 1, blue};

class Color {
    Hue cl;
  public:
    Color(Hue i=red){
      color1(i);
    }
    Hue color1() const;
    void color1(Hue);
};

inline Hue Color::color1() const{
  return cl;
}
inline void Color::color1(Hue i){
  cl = i;
}

int main(){
  Color c(red);
  cout<<"initial Hue = "<<c.color1()<<"\n";
  c.color1(blue);
  cout<<"Hue = "<<c.color1()<<"\n";
}
