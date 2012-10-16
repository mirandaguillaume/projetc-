#ifndef DEF_TERMITE
#define DEF_TERMITE

#include <iostream>
#include "actor.hpp"

using namespace std;

class termite : public actor {
private :
  bool carry;
  
public :
  termite(int i = 0, int j = 0, bool c = false) : actor (i,j), carry(c) {}
  virtual actor* clonage() {return new termite(*this);}
  bool getCarry()const{return carry;}
  void setCarry(bool x){carry=x;}
};
#endif
