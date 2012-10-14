#ifndef DEF_ACTORS_WORLD
#define DEF_ACTORS_WORLD

class actors_world: public basic_world{

  actors_world(int i=0, j=0, int nb): basic_world(i, j), nbActors(nb){
    list = new actor[nbActors];
  }

  actors_world(const actors_world& m): basic_world(m){
    this->nbActors=m.nbActors;
    this->list= new actor[nbActors];
  }

  actor_world& operator=(const actor_world& m){
  }



protected:
  actor * actors;
  int nbActors;
};
