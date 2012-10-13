#ifndef DEF_TERMITE
#define DEF_TERMITE

#include <iostream>
#include "actor.hpp"

using namespace std;

class termite : public actor {

  bool carry;
  
  termite(int i = 0, int j = 0, bool c = false) : actor (i,j), carry(c) {}

};
#endif
