
#ifndef DEF_ANT
#define DEF_ANT

#include <ctime>
#include <cstdlib>

enum direction {north,east,south,west};

class ant: public actor{

public:
  ant(int i=0, int j=0) {
    x=i;
    y=j;
    orientation=(direction)(rand()%4);
  }

  direction getDir() const {return orientation;}
  
  void setDir(bool b)
  {
    int i=0;
    if (b) i=1;
    else i=-1;
    orientation=(direction)(((int)orientation)+ i);
  }

private:
  direction orientation;
};

#endif
