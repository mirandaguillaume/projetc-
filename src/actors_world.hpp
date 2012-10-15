#ifndef DEF_ACTORS_WORLD
#define DEF_ACTORS_WORLD
#include "basic_world.hpp"
#include "actor.hpp"

class actors_world : public basic_world<int>{
public:
  actors_world(int i=0,int j=0, int nb=5): basic_world<int>(i,j), nbActors(nb){
    actors =new actor[nbActors];
  }

  actors_world(const actors_world& m): basic_world<int>(m){
    this->nbActors=m.nbActors;
    this->actors=new actor[nbActors];
  }

  actors_world& operator=(const actors_world& m){
    basic_world<int>::operator=(m);
    if (this!=&m){
      this->nbActors=m.nbActors;
      this->actors=new actor[nbActors];
    }
    return *this;
  }

  ~actors_world(){
    if (actors)
      delete [] actors;
  }

protected:
  actor * actors;
  int nbActors;
};

#endif
