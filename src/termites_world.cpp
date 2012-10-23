#include "termites_world.hpp"

void termites_world::init()
{
  int x, y;
  for (int i=0;i<nbWood;i++) // placement des bouts des bois
    {
      do 
	{
	  x = rand()%height;
	  y = rand()%length;
	} while (matrix[x][y]==9); // tas de bois de taille  maximum 9
      matrix[x][y]++;
    }
  for (int i=0;i<nbActors;i++)
    {
      do {
	x = rand()%height;
	y = rand()%length;
      } while (matrix[x][y]<0);
      list[i].setCoord(x,y);
      matrix[x][y]*=(-1);
      matrix[x][y]-=1;
    }
}

termites_world::termites_world(int x, int y, int nb_t,int speed,int nbWood) : actors_world<termite,int>(x,y,nb_t,speed), nbWood(nbWood) 
{init();}

bool termites_world::carry(int x, int y = -1)
{
  if (y == -1)
    return list[x].getAttrib();
  for (int i = 0; i < nbActors; i++)
    {
      if (list[i].getX() == x && list[i].getY() == y)
	return list[i].getAttrib();
    }
  return false;
}

int termites_world::getWood(int x, int y)
{
  if(matrix[x][y]>=0) return matrix[x][y];
  else return -1*(matrix[x][y]+1);
}



bool termites_world::movable(int x, int y)
{
  bool ok(false);
  for(int i = x-1; i <= x+1 && !ok; i++)
    for(int j = y-1; j <= y+1 && !ok; j++)
      {
	if( i != x || j != y )
	  {
	    i=(i+height)%height;
	    j=(j+length)%length;
	    if(!occuped(i,j))ok= true;
	  }
      }
  return ok;
}
	
void termites_world::do_move(int dx, int dy, int index)
{
  matrix[list[index].getX()][list[index].getY()]=-1*(matrix[list[index].getX()][list[index].getY()]+1);
  matrix[dx][dy]=-1*(matrix[dx][dy]+1);
  list[index].setCoord(dx, dy);
  if (list[index].getAttrib() && matrix[dx][dy]!=-10)
    {    
      matrix[dx][dy]--;
      list[index].setAttrib(false);
    }
  else if (!list[index].getAttrib() && matrix[dx][dy]<-1)
    {
      matrix[dx][dy]++;
      list[index].setAttrib(true);
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
  int aux;
  if (movable(x,y)){
    while(!moved){
      aux=rand()%8;
      switch(aux){
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
  for(int p = 0; p < nbActors; p++)
    {
      move(p);
      display();
    }
}

void termites_world::display_informations(int y,int x)
{
  if(occuped(y,x))
    {
      if( getWood(y,x))	
	if(carry(y,x))
	  cout<<"│\033[31mT\033[00m "<<getWood(y,x);
	else
	  cout<<"│\033[32mT\033[00m "<<getWood(y,x);
      else if(carry(y,x))
	cout<<"│ \033[31mT\033[00m ";
      else
	cout<<"│ \033[32mT\033[00m ";
    }
  else  if(getWood(y,x))
    cout<<"│ "<<getWood(y,x)<<" ";
  else 
    cout<<"│   ";
}
