
#include<iostream>

using namespace std;

enum note {middleC, Csharp, Cflat};

class Instrument {
  public:
    virtual void play(note) const {
      cout<<"Instrument::play()\n";
    }
    virtual void prepare() const {
      cout<<"Instrument::prepare()\n";
    }
};

class Wind: public Instrument {
  public:
    void play(note) const {
      cout<<"Wind::play()\n";
    }
};

void tune (Instrument &i){
  i.play(middleC);
  i.prepare();
}

int main(){
  Wind flute;
  tune(flute);
}
