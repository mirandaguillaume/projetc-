#ifndef DEF_ANT
#define DEF_ANT

#include <ctime>
#include <cstdlib>

class ant: public actor{

  ant(int i, int j){
    x=rand()%i;
    y=rand()%j;
    dir=rand()%4;
  }

  int getDir()const{return dir;}

  int setDir(int a){dir=a;}

private:
  int dir;
};
