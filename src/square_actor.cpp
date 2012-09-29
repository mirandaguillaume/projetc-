#include "square_actor.hpp"

square_actor::square_actor (const square_actor& s) : actor(s.nb)
{
  a=new actor(*s.a);
}

square_actor& square_actor::operator = (const square_actor& s)
{
  if (this!=&s)
    {
      if (a) delete a;
      nb=s.nb;
      a=new actor (*s.a);
    }
  return *this;
}
