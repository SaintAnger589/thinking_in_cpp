#include<iostream>
#include<string>

using namespace std;
struct Lib{
  //string a;
  //string b;
  //string c;
  string s[3];
};

class Libc{
private:
  string a,b,c;
  string s[3];
public:
  /*
  string geta(){
    return a;
  }
  string getb(){
    return b;
  }
  string getc(){
    return c;
  }
  void seta(string temp){
    a = temp;
  }

  void setb(string temp){
    b = temp;
  }

  void setc(string temp){
    c = temp;
  }
  */
  string geta(){
    return s[0];
  }
  string getb(){
    return s[1];
  }
  string getc(){
    return s[2];
  }
  void seta(string temp){
    s[0] = temp;
  }

  void setb(string temp){
    s[1] = temp;
  }

  void setc(string temp){
    s[2] = temp;
  }
};

int main(){
  Lib x;
  Libc y;
  /*
  x.a = "Hello";
  x.b = "World";
  x.c = "Welcome";

  cout<<"x.a = "<<x.a<<"\n";
  cout<<"x.b = "<<x.b<<"\n";
  cout<<"x.c = "<<x.c<<"\n";


  x.s[0] = "Hello";
  x.s[1] = "World";
  x.s[2] = "Welcome";

  cout<<"x.s[0] = "<<x.s[0]<<"\n";
  cout<<"x.s[1] = "<<x.s[1]<<"\n";
  cout<<"x.s[2] = "<<x.s[2]<<"\n";
  */
  //class

    y.seta("Hello");
    y.setb("World");
    y.setc("Welcome");

    cout<<"a = "<<y.geta()<<"\n";
    cout<<"b = "<<y.getb()<<"\n";
    cout<<"c = "<<y.getc()<<"\n";
}
