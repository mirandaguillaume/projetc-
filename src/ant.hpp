#ifndef DEF_ANT
#define DEF_ANT

#include <ctime>
#include <cstdlib>

enum direction {north,east,south,west};

class ant: public actor{

public:
  ant(int i, int j) {
    x=i;
    y=j;
    orientation=(direction)(rand()%4);
  }

  direction getDir() const {return orientation;}

  void move(int x,int y) {this->x=x; this->y=y;}
  
  void setDir(bool b)
  {
    int i=0;
    if (b) i=1;
    else i=-1;
    orientation=(direction)(((int)orientation)+ i);
  }

  virtual actor* clonage() {return new ant(*this);}

private:
  direction orientation;
};

#endif
