#ifndef DEF_TERMITE
#define DEF_TERMITE

#include <iostream>
#include "actor.hpp"

using namespace std;

class termite : public actor<bool>
{

public :

  termite(int i = 0, int j = 0, bool c = false) : actor<bool> (c,i,j) {}
  void setAttrib(bool b) {attrib=b;}
  
};
#endif
