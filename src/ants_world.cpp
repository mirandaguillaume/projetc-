#include "ants_world.hpp"
#include <cmath>

ants_world::ants_world(int i,int j, int nb, int speed): actors_world<ant,int>(i, j,nb,speed)
{init();}

void ants_world::init()
{
  ant a;
  int x,y;
  for (int i=0; i<height; i++)
    for(int j=0; j<length; j++)
      switch(rand()%2)
	{
	case 0:	matrix[i][j]=-1;break;
	case 1: matrix[i][j]=1;break;
	}
  for (int i=0; i<nbActors; i++)
    {
      do {
      x=rand()%height;
      y=rand()%length;
      } while (abs(matrix[x][y])==2);
      a.setCoord(x,y);
      list[i]=a;
      matrix[x][y]+=(white(x,y)?-1:1);
    }
}

bool ants_world::white(int x, int y) const {
  return matrix[x][y]<0;
}

int ants_world::getNb(int x, int y) const {
  return matrix[x][y]*(white(x,y)?-1:1)-1;
}

void ants_world::move(int i){
  int x(list[i].getX()),y(list[i].getY());
  switch(list[i].getDir())
    {
    case north: y=(y+1)%length; break;
    case east: x=(x+1)%height; break;
    case south: y=(y-1+length)%length; break;
    case west: x=(x-1+height)%height;break;
    }
  if (abs(matrix[x][y])!=2)
    {
      matrix[list[i].getX()][list[i].getY()]-=(white(list[i].getX(),list[i].getY())?-1:1);
      matrix[x][y]+=(white(x,y)?-1:1);
      list[i].setCoord(x,y);
    }
  else 
    {
      x=list[i].getX();
      y=list[i].getY();
    }
  matrix[x][y]*=(-1);
  list[i].setDir(white(x,y));
}

void ants_world::lap(){
  for (int i=0; i<nbActors; i++)
    {
      move(i);
      display();
    }
}


void ants_world::display_informations(int i, int j){
  if(white(i,j))
    cout<<"│\033[30;47m "<<getNb(i,j)<<" \033[00m";
  else
    cout<<"│\033[37;40m "<<getNb(i,j)<<" \033[00m";

}
