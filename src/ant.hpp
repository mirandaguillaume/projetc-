#ifndef DEF_ANT
#define DEF_ANT

#include <ctime>
#include <cstdlib>

enum direction {north=0,east,south,west};

class ant: public actor<direction>{

public:
  ant(int i=0, int j=0):actor<direction>(i,j) {
    attrib=(direction)(rand()%4);
  }
  
  virtual void setAttrib(bool b)
  {
    int i=0;
    if (b) i=1;
    else i=-1;
    attrib=(direction)(((int)attrib)+ i);
  }

};

#endif
