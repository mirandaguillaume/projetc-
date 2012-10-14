#ifndef DEF_ACTORS_WORLD
#define DEF_ACTORS_WORLD


class actors_world: public basic_world{

  actors_world(int i=0, j=0, int nb=5): basic_world(i, j), nbActors(nb){
    actors = new actor[nbActors];
  }

  actors_world(const actors_world& m): basic_world(m){
    this->nbActors=m.nbActors;
    this->actors= new actor[nbActors];
  }

  actors_world& operator=(const actors_world& m){
    basic_world::operator=(m);
    if (this!=&m){
      this->nbActors=m.nbActors;
      this->actors= new actor[nbActors];
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
