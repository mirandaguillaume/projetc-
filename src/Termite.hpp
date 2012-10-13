#ifndef DEF_TERMITE
#define DEF_TERMITE

#include <iostream>

using namespace std;

class termite : public actor {

  bool carry;
  
  termite(int i = 0, int j = 0, ) : actor (i,j) {carry = false;}
#endif
