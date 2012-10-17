#ifndef DEF_ACTOR
#define DEF_ACTOR

#include <iostream>

using namespace std;

class actor {
protected:
  int x,y; // coordonnées de l'acteur
public:

  int getX()const{return x;}
  int getY()const{return y;}

  void setX(int a){x=a;}
  void setY(int b){y=b;}

  actor(int i=0, int j=0) : x(i), y(j) {}

};

#endif
