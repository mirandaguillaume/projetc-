#infdef DEF_SQUARE_ACTOR
#define DEF_SQUARE_ACTOR

#include "square.hpp"

class square_actor : public square
{
public :
  square_actor (int i=0, actor act) : square(i) { act = new actor(a); }
  square_actor (const square_actor&);
  square_actor& operator = (const square_actor&);
private :
  actor* a;
};

#endif
