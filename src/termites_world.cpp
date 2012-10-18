#include "termites_world.hpp"

void termites_world::init()
{
  int x, y, aux;
  termite t;
  for (int i=0;i<(2*height*length);i++)
    {
      do 
	{
	  x = rand()%height;
	  y = rand()%length;
	} while (matrix[x][y]==9);
      matrix[x][y]++;
    }
  for (int i=0;i<nbActors;i++)
    {
      do {
	x = rand()%height;
	y = rand()%length;
      } while (matrix[x][y]<=0);
      t.setCoord(x,y);
      list[i] = t;
      matrix[x][y]*=(-1);
      matrix[x][y]-=1;
    }
}

termites_world::termites_world(int x, int y, int nb_t,bool speed) : actors_world<termite,int>(x,y,nb_t,speed) 
{init();}

bool termites_world::carry(int x, int y = -1)
{
  if (y == -1)
    return list[x].getCarry();
  for (int i = 0; i < nbActors; i++)
    {
      if (list[i].getX() == x && list[i].getY() == y)
	return list[i].getCarry();
    }
  return false;
}

int termites_world::getWood(int x, int y)
{
  if(matrix[x][y]>=0) return matrix[x][y]-1;
  else return -1*(matrix[x][y]+1);
}

/*
  void termites_world::mod(int & x, int & y)
  {
  if(x<0) x = height--;
  else if(x==height) x = 0;
  if(y<0) y = length--;
  else if(y==length) y = 0;
  }
*/

bool termites_world::movable(int x, int y)
{
  for(int i = x-1; i <= x+1; i++)
    for(int j = y-1; i <= j+1; i++)
      {
	if( i != x && j != y )
	  {
	    if (i<0) i+=height;	
	    if (j<0) j+=length;
	    i%=height;
	    j%=length;
	    if(!occuped(i,j))return true;
	  }
      }
  return false;
}
	
void termites_world::do_move(int dx, int dy, int index)
{
  matrix[list[index].getX()][list[index].getY()]=-1*(matrix[list[index].getX()][list[index].getY()]+1);
  matrix[dx][dy]=-1*(matrix[dx][dy]+1);
  if (list[index].getCarry() && matrix[dx][dy]!=-10)
    {    
      matrix[dx][dy]--;
      list[index].setCarry(false);
    }
  else if (!list[index].getCarry())
    {
      matrix[dx][dy]++;
      list[index].setCarry(true);
    }
}

bool termites_world::verif_move(int dx, int dy, int index)
{
  if(!occuped(dx, dy)){
    do_move(dx,dy,index);
    return true;}
  return false;
}

void termites_world::move(int i)
{
  int x = list[i].getX(), y = list[i].getY(), dx(x), dy(y);
  bool moved = false;
  if (movable(x,y)){
    while(!moved){
      switch(rand()%8){
      case 1: dx = (x + 1)%height;
      case 0: dy = (y + 1)%length; break;
 
      case 3: dy = (y - 1 + length)%length;
      case 2: dx = (x + 1)%height; break;
  
      case 5: dx = (x - 1 + height)%height;  
      case 4: dy = (y - 1 + length)%length;break;
   
      case 7: dy = (y + 1)%length;
      case 6: dx = (x - 1 + height)%height; break;
      }
      moved = verif_move(dx,dy,i);
    }
  }
}

void termites_world::lap()
{
  for(int j = 0; j < nbActors; j++)
    {
      move(j);
      display();
    }
}

void termites_world::display_informations(int y,int x)
{
  if(occuped(y,x))
    {
      if(carry(y,x))	
	cout<<"│\033[31mT\033[00m "<<getWood(y,x);
      else
	cout<<"│\033[34mT\033[00m "<<getWood(y,x);
    }
  else  
    cout<<" "<<getWood(y,x)<<" ";
}
