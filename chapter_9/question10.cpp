#include<iostream>
#include<cstring>

using namespace std;

enum Hue {red = 0, green = 1, blue};

class Color {
    Hue cl;
  public:
    Color(Hue i=red){
      setHue(i);
    }
    Hue getHue();
    void setHue(Hue);
};

inline Hue Color::getHue(){
  return cl;
}
inline void Color::setHue(Hue i){
  cl = i;
}

int main(){
  Color c(red);
  cout<<"initial Hue = "<<c.getHue()<<"\n";
  c.setHue(blue);
  cout<<"Hue = "<<c.getHue()<<"\n";
}
