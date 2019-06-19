#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Plant{
  string type;
  int waterlevel;
  public:
    Plant();
    void setPlant(int l);
    int getwaterLevel(){return waterlevel;}
    string gettype(){return type;}
};

Plant::Plant(){
  waterlevel = 0;
  cout<<"constructor Plant waterlevel = "<<waterlevel<<"\n";
}
void Plant::setPlant(int l){
  cout<<"setting plants\n";
  //cout<<"string  = "<<t<<"\n";
  cout<<"level = "<<l<<"\n";
  //type = t;
  waterlevel = l;
  cout<<"level = "<<waterlevel<<"\n";
}

class Greenhouse : public Plant{
  int amount;
  vector<Plant *> g;
  public:
    void setPlants(Plant *p);
    void printAmount(){
      cout<<"g size  = "<<g.size()<<"\n";
      while (g.size()){
        Plant *u = g.back();

        g.pop_back();
        //char name = u->gettype();
        cout<<"test1\n";
        if (u->getwaterLevel() >= 3){
          //cout<<name<<" Water Is required in morning and evening\n";
          cout<<" Water Is required in morning and evening\n";
        }else {
          cout<<" Water is required only in morning";
        }
      }

    }
};

void Greenhouse::setPlants(Plant *p){
  cout<<"inside greenhouse setplants\n";
  g.push_back(p);
}
int main(){
  Plant p;
  Plant q;
  //p->setPlant("Cactus", 1);
  //q->setPlant("Coconut", 7);
  p.setPlant(1);
  q.setPlant(7);

  Greenhouse g;
  g.setPlants(&p);
  g.setPlants(&q);
  g.printAmount();
}

