#ifndef DEF_TERMITE
#define DEF_TERMITE

#include "actor.hpp"

class termite : public actor {

public :

  termite(int i = 0, int j = 0, bool c = false) : actor (i,j), carry(c) {}
  bool getCarry() const {return carry;}
  void setCarry(bool b) {carry=b;}

private :
  bool carry;
  
};
#endif
