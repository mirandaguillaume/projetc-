#include "ants_world.hpp"

ants_world :: ants_world (int i=0, int j=0, int nb=3): actors_world<ant>(i, j, nb){
  for (int i=0; i<height; i++)
    for(int j=0; j<length; j++)
      matrix[i][j]=-1;
  for (int i=0; i<nbActors; i++){
    int x=rand()%height;
    int y=rand()%length;
    list[i]= ant(x,y);
    matrix[x][y]-=1;
  }
}
ants_world::ants_world(const ants_world& m): actors_world<ant>(m){
  for (int i=0; i<height; i++)
    for(int j=0; j<length; j++)
      this->matrix[i][j]=m.matrix[i][j];
  for (int i=0; i<nbActors; i++)
    this->list[i]=m.list[i];
}

ants_world & ants_world::operator=(const ants_world& m){
  actors_world::operator=(m);
  if (this!=&m){
    for (int i=0; i<height; i++)
      for(int j=0; j<length; j++)
	this->matrix[i][j]=m.matrix[i][j];
    for (int i=0; i<nbActors; i++)
      this->list[i]=m.list[i];
  }
  return *this;
}

bool ants_world::white(int x, int y)const{
  return matrix[x][y]<0;
}

int ants_world::getNb(int x, int y)const{
  return matrix[x][y]*(white(x,y)?-1:1)-1;
}

void ants_world::move(int i){
  matrix[list[i].getX()][list[i].getY()]-=(white(list[i].getX(),list[i].getY())?-1:1);
  switch(list[i].getDir()){
  case 0: move_up(i); break;
  case 1: move_right(i); break;
  case 2: move_down(i); break;
  case 3: move_left(i);
  }
  list[i].setDir(list[i].getDir()+(white(list[i].getX(),list[i].getY())?1:-1));
  matrix[list[i].getX()][list[i].getY()]*=(-1);
  matrix[list[i].getX()][list[i].getY()]+=(white(list[i].getX(),list[i].getY())?-1:1);
}

void ants_world::lap(){
  for (int i=0; i<nbActors; i++)
    move(i);
}

void ants_world:: move_up(int i){
  list[i].setY((list[i].getY()+1)%height);
}

void ants_world::move_down(int i){
  list[i].setY((list[i].getY()-1+height)%height);
}

void ants_world:: move_right(int i){
  list[i].setX((list[i].getX()+1)%length);
}

void ants_world::move_left(int i){
  list[i].setX((list[i].getX()-1+length)%length);
}

void ants_world::display_informations(int i, int j){
  if(white(i,j))
    cout<<"│\033[30;47m "<<getNb(i,j)<<" \033[00m";
  else
    cout<<"│\033[37;40m "<<getNb(i,j)<<" \033[00m";
}
