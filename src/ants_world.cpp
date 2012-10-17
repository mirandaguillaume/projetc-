#include "ants_world.hpp"

ants_world::ants_world(int i,int j, int nb): actors_world(i, j,nb)
{init();}

void ants_world::init()
{
  for (int i=0; i<height; i++)
    for(int j=0; j<length; j++)
      matrix[i][j]=-1;
  for (int i=0; i<nbActors; i++)
    {
      int x=rand()%height;
      int y=rand()%length;
      list[i]= new ant(x,y);
      matrix[x][y]-=1;
    }
}

bool ants_world::white(int x, int y) const {
  return matrix[x][y]<0;
}

int ants_world::getNb(int x, int y) const {
  return matrix[x][y]*(white(x,y)?-1:1)-1;
}

void ants_world::move(int i){
  bool time;
  int i(0),j(0);
  this->action(i,time);
  matrix[list[i]->getX()][list[i]->getY()]*=-1;
  matrix[list[i]->getX()][list[i]->getY()];
  switch(list[i]->getDir()){
  case north: j=(j+1)%length; break;
  case west: ; break;
  case south: ; break;
  case east: ;
  }
  /*
  list[i]->setDir(white);
  matrix[list[i]->getX()][list[i]->getY()]*=(-1);
  matrix[list[i]->getX()][list[i]->getY()]+=(white(list[i]->getX(),list[i]->getY())?-1:1);*/
  this->action(i,time);
}

void ants_world::move_up(int i){
  list[i]->setY((list[i]->getY()+1)%height);
}

void ants_world::move_down(int i){
  list[i]->setY((list[i]->getY()-1+height)%height);
}

void ants_world::move_right(int i){
  list[i]->setX((list[i]->getX()+1)%length);
}

void ants_world::move_left(int i){
  list[i]->setX((list[i]->getX()-1+length)%length);
}

void ants_world::lap(){
  for (int i=0; i<nbActors; i++)
    move(list[i]);
}


void ants_world::display_informations(int i, int j){
  if(white(i,j))
    cout<<"│\033[30;47m "<<getNb(i,j)<<" \033[00m";
  else
    cout<<"│\033[37;40m "<<getNb(i,j)<<" \033[00m";

}
