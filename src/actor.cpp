#ifndef DEF_ACTOR
#define DEF_ACTOR

#include <iostream>

using namespace std;

class actor {

  int x,y;

  int getX()const{return x;}
  int getY()const{return y;}

  int setX(int a){x=a;}
  int setY(int b){y=b;}

  actor(int i, int j) : x(i), y(j) {}

};

#endif
