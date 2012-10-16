#ifndef DEF_ACTORS_WORLD
#define DEF_ACTORS_WORLD

#include "basic_world.hpp"
#include "actor.hpp"

class actors_world : public basic_world<int>
{
public:
  actors_world(int i=0,int j=0, int nb=5);
  actors_world(const actors_world&);
  actors_world& operator=(const actors_world&);
  ~actors_world();

protected:
  actor ** actors;
  int nbActors;
};

#endif
