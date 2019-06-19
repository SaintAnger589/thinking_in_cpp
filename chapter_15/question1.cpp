
#include<iostream>

using namespace std;

class Shape{

public:
  virtual void draw() const{
    cout<<"Share::draw()"<<endl;
  }
  ~Shape(){
    cout<<"~Shape()"<<endl;
  }
};

class Circle: public Shape{
  public :
    virtual void draw(){
      cout<<"Circle::draw()"<<endl;
    }

    ~Circle(){
      cout<<"~Circle()"<<endl;
    }
};


class Square: public Shape{
  public :
    virtual void draw(){
      cout<<"Square::draw()"<<endl;
    }

    ~Square(){
      cout<<"~Square()"<<endl;
    }
};


class Triangle: public Shape{
  public :
    virtual void draw(){
      cout<<"Triangle::draw()"<<endl;
    }

    ~Triangle(){
      cout<<"~Triangle()"<<endl;
    }
};


int main(){
  Shape *s[] = {new Circle, new Square, new Triangle};
  int i;
  for (i=0;i<3;i++){
    s[i]->draw();
  }
  for (i=0;i<3;i++){
    delete s[i];
  }

}
