#ifndef DEF_ANT
#define DEF_ANT

#include <ctime>
#include <cstdlib>

class ant: public actor{

public:
  ant(int i,int j):actor(i,j){
    dir=rand()%4;
  }
  int getDir()const{return dir;}

  void setDir(int a){dir=a;}

private:
  int dir;
};

#endif
