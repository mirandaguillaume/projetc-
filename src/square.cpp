#include "square.hpp"
#include <iostream>

using namespace std;

square::square() : nb(0), a(NULL) {}

square::square(int i,actor act) : nb(i)
{ a=new actor(act); }

square::square(const square& s) : nb(s.nb)
{ a=new actor(*s.a); }

square& square::operator = (const square& s)
{
  if (this!=&s)
    {
      if (a) delete a;
      a=new actor();
      nb=s.nb;
    }
  return *this;
}

square::~square()
{if (a) delete a;}
