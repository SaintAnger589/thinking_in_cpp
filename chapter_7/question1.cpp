#include "iostream"
#include "fstream"

using namespace std;

class Text{
  string s;

public:
  Text(){
    s = "";
  }
  Text(string t){
    s = "";
    ifstream f(t);
    if (f.is_open()){
      while(!f.eof()){
        string line;
        getline(f, line);
        s = s + line;
      }
      f.close();
    } else {
      cout<<"Unable to open the file\n";
    }

  }

  string contents(){
    return s;
  }

};

int main(){

  Text t("temp.txt");
  string res = t.contents();

  cout<<"res = "<<res<<"\n";
}
