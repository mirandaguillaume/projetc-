#ifndef DEF_ACTORS_WORLD
#define DEF_ACTORS_WORLD


class actors_world: public basic_world{

  actors_world(int i=0, j=0, int nb): basic_world(i, j), nbActors(nb){
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
  }

  ~actors_world(){
    if (actors)
      delete [] actors;
  }

  bool occuped(int x, int y){
    return (matrix[x][y]>0);
  }

  //L'axe XY suit l'axe cartésien |XY inversé dans la matrice
void move_up(actor* a)
{
  matrix[a->getY()][a->getX]*=-1;
  a->setY((a->getY()+1)%height);
  matrix[a->getY()][a->getX]*=-1;
}

void move_down(actor* a)
{
  matrix[a->getY()][a->getX]*=-1;
  a->setY((a->getY()-1+height)%height);
  matrix[a->getY()][a->getX]*=-1
}

void move_right(actor* a)
{
  matrix[a->getY()][a->getX]*=-1;
  a->setX((a->getX()+1)%length);
  matrix[a->getY()][a->getX]*=-1;
}

void move_left(actor*a)
{
  matrix[a->getY()][a->getX]*=-1;
  a->setX((a->getX()-1+length)%length);
  matrix[a->getY()][a->getX]*=-1;
}


protected:
  actor * actors;
  int nbActors;
};
