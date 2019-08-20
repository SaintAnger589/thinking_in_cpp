#include <iostream>
#include <string>

using namespace std;

class Message{
private:
  string s;

public:
  Message(string str){
    s = str;
  }

  void print(){
    cout<<"Object messge "<<s<<"\n";
  }
  void print(string st){
    cout<<"passed message "<<st<<"\n";
    cout<<"Object message "<<s<<"\n";
  }

};


int main(){
  class Message c("this is string object");
  c.print();

  cout<<"printing the message along with stored\n";
  c.print("Hello");
}
