#include "square.hpp"
#include <iostream>

using namespace std;

square::square(int i,actor act) : nb(i)
{ a=new actor(); }

square::square(const square& s) : nb(s.nb)
{ a=new actor(); }

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
