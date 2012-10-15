
#ifndef DEF_ANTS_WORLD
#define DEF_ANTS_WORLD


class ants_world: public actors_world{

  ants_world(int i=0, j=0, int nb): actors_world(i, j, nb){
    for (int i=0; i<height; i++)
      for(int j=0; j<length; j++)
	matrix[i][j]=-1;
    for (int i=0; i<nbActors; i++){
      int x=rand()%height;
      int y=rand()%length;
      actors[i]=ants(x, y);
      matrix[x][y]-=1;
}

  ants_world(const ants_world& m): actors_world(m){
    for (int i=0; i<height; i++)
      for(int j=0; j<length; j++)
	this->matrix[i][j]=m.matrix[i][j];
    for (int i=0; i<nbActors; i++)
      this->actors[i]=m.actors[i];
}

  ants_world& operator=(const ants_world& m){
    actors_world::operator=(m);
    if (this!=&m){
      for (int i=0; i<height; i++)
	for(int j=0; j<length; j++)
	  this->matrix[i][j]=m.matrix[i][j];
      for (int i=0; i<nbActors; i++)
	this->actors[i]=m.actors[i];
    }
    return *this;
  }

  ~ants_world(){
    for (int i=0; i<nbActors; i++)
      if (actors[i])
      delete actors[i];
  }

  bool white(int x, int y){
    return matrix[x][y]<0;
  }

  int getNb(int x, int y){
    return matrix[x][y]*(white(x,y)?-1:1)-1;
  }

  void move(ant& a){
    matrix[a.getX][a.getY]-=(white(a.getX,a.getY)?-1:1);
    switch(a.getDir()){
    case 0: move_up(a); break;
    case 1: move_right(a); break;
    case 2: move_down(a); break;
    case 3: move_left(a);
    }
    a.setDir(a.getDir()+(white(a.getX,a.getY)?1:-1));
    matrix[a.getX][a.getY]*=(-1);
    matrix[a.getX][a.getY]+=(white(a.getX,a.getY)?-1:1);
  }

  void lap(){
    for (int i=0; i<nbActors; i++)
      move(actors[i]);
  }

  void move_up(actor& a){
    a.setY((a.getY()+1)%height);
  }

  void move_down(actor& a){
    a.setY((a.getY()-1+height)%height);
  }

  void move_right(actor& a){
    a.setX((a.getX()+1)%length);
  }

  void move_left(actor& a){
    a.setX((a.getX()-1+length)%length);
  }
};

#endif
