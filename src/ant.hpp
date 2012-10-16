#ifndef DEF_ANT
#define DEF_ANT

#include <ctime>
#include <cstdlib>

enum direction {nord,est,sud,ouest};

class ant: public actor{

public:
  ant(int i, int j) {
    x=i;
    y=j;
    orientation=(direction)rand()%4;
  }

  direction getDir() const {return orientation;}

  void setDir(direction d){orientation=d;}

  virtual actor* clonage() {return new ant(*this);}

private:
  direction orientation;
};

#endif
