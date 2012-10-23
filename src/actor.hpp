#ifndef DEF_ACTOR
#define DEF_ACTOR

#include <iostream>

using namespace std;

template <typename T>
class actor {
protected:
  int x,y; // coordonnées de l'acteur
  T attrib;
public:

  int getX()const{return x;}
  int getY()const{return y;}

  virtual void setAttrib(bool) = 0;
  void setCoord(int x, int y) {this->x=x;this->y=y;}
  
  T getAttrib() {return attrib;}

  actor( T attrib,int i=0, int j=0) : x(i), y(j), attrib(attrib) {}
  actor(int i=0, int j=0) : x(i), y(j) {}
 };

#endif
