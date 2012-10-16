#ifndef DEF_TERMITE_WORLD
#define DEF_TERMITE_WORLD
#include "actors_world.hpp"
#include "termite.hpp"

class termites_world : public actors_world
{
public : 
  termites_world(int x, int y, int nb_t, int nb_w) : actors_world(x,y,nb_t) 
  {
    int xp, yp, aux;
    while (nb_w!=0)
      {
	xp = rand()%x;
	yp = rand()%y;
	aux = (((rand()%nb_w)+1)%9)+1;
	if (matrix[xp][yp]!=9)
	  {
	    if ((matrix[xp][yp] + aux)>=9)
	      {
		nb_w = nb_w - (9 - matrix[xp][yp]);
		matrix[xp][yp] = 9;
	      }
	    else 
	      {
		matrix[xp][yp] = matrix[xp][yp] + aux;
		nb_w = nb_w - aux;
	      }
	  }
      }	  
    
    while (nb_t!=0)
      {
	xp = rand()%x;
	yp = rand()%y;
	if(matrix[xp][yp]>=0)
	  {
	    actors[nb_t-1] = new termite(xp,yp);
	    matrix[xp][yp] = -1*(matrix[xp][yp]++);
	    nb_t--;
	  }
      }
  }

  //Getteurs

  bool occuped(int x, int y){return(matrix[x][y]<0);}

  bool carry(int x, int y = -1)
  {
    if (y == -1)
      return actors[x]->getCarry();
    for (int i = 0; i < nbActors; i++)
      {
	if (actors[i]->getX() == x && actors[i]->getY() == y)
	  return actors[i]->getCarry();
      }
    return false;
  }

  int getWood(int x, int y)
  {
    if(matrix[x][y]>=0) return matrix[x][y];
    else return -1*(matrix[x][y]+1);
  }

  void mod(int & x, int & y)
  {
    if(x<0) x = height--;
    else if(x==height) x = 0;
    if(y<0) y = length--;
    else if(y==length) y = 0;
  }

  bool movable(int x, int y)
  {
    int xp, yp;
    for(int i = x-1; i <= x+1; i++)
      for(int j = y-1; i <= j+1; i++)
	{
	  if( i != x || j != y )
	    {
	      mod(i,j);
	      if(!occuped(i,j))return true;
	    }
	}
    return false;
  }
    
  void do_move(int & x, int & y, int & dx, int & dy, int & index)
  {
    matrix[x][y] = -1*(matrix[x][y]+1);
    matrix[dx][dy] = -1*(matrix[dx][dy]+1);
    if(matrix[dx][dy]==-10)
      if(actors[index]->getCarry())
	{
	  matrix[dx][dy]--;
	  actors[index]->setCarry(0);
	}
  }

  bool verif_move(int & x, int & y, int & dx, int & dy, int & index)
  {
    mod(dx, dy);
    if(!occuped(dx, dy)){
      do_move(x,y,dx,dy,index);
      return true;}
    return false;
  }

  void move(int index)
  {
    int x = actors[index]->getX(), y = actors[index]->getX(), dx, dy;
    bool moved = false;
    if (movable(x,y)){
      while(!moved){
	int M = rand()%8;
	switch(M){
	case 0: dx = x; dy = y + 1;
	  moved = verif_move(x,y,dx,dy,index);
	  break;
	case 1: dx = x + 1; dy = y + 1;
	  mod(dx, dy);
	  moved = verif_move(x,y,dx,dy,index);
	  break;
	case 2: dx = x + 1; dy = y;
	  mod(dx, dy);
	  moved = verif_move(x,y,dx,dy,index);
	  break;
	case 3: dx = x + 1; dy = y - 1;
	  mod(dx, dy);
	  moved = verif_move(x,y,dx,dy,index);
	  break;
	case 4: dx = x; dy = y - 1;
	  mod(dx, dy);
	  moved = verif_move(x,y,dx,dy,index);
	  break;
	case 5: dx = x - 1; dy = y - 1;
	  mod(dx, dy);
	  moved = verif_move(x,y,dx,dy,index);
	  break;
	case 6: dx = x - 1; dy = y;
	  mod(dx, dy);
	  moved = verif_move(x,y,dx,dy,index);
	  break;
	case 7: dx = x - 1; dy = y + 1;
	  mod(dx, dy);
	  moved = verif_move(x,y,dx,dy,index);
	  break;
	}
      }
    }
  }

  void lap(int nb)
  {
    for(int i = 0; i < nb; i++)
      for(int j = 0; j < nbActors; j++)
	move(i);
  }
  void display_informations(int y,int x){
    if(occuped(y,x))
      {
	if(carry(y,x))	
	  cout<<"│\033[31mT\033[00m "<<getWood(y,x);
	else
	  cout<<"│\033[34mT\033[00m "<<getWood(y,x);
      }
    else  
      cout<<" "<<getWood(y,x)<<" ";}	  
};

#endif
