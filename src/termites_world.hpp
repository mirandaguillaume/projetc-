#ifndef DEF_TERMITE_WORLD
#define DEF_TERMITE_WORLD

#include "actors_world.hpp"

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
		matrix[xp][xy] = matrix[xp][yp] + aux;
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
	    actors[nb_t-1] = new termite (xp, yp);
	    matrix[xp][yp] = -1*(matrix[xp][yp]++);
	      nb_t--;
	  }
      }
  }

  bool occuped(int x, int y) {return(matrix[x][y]<0);}

  bool carry(int x, int y)
  {
    for (int i = 0; i < nb_actors; i++)
      {
	if (actors[i]->x == x && actors[i]->y == y)
	  return carry;
      }
    return false;
  }

  bool movable(int x, int y)
  {
    if(occuped(x-1,y)==true && occuped(x-1,y+1)==true && occuped(x,y+1)==true && occuped(x+1,y+1)==true && occuped(x+1,y)==true && occuped(x+1,y-1)==true && occuped(x,y-1)==true && occuped(x-1,y-1)==true) return false;
    else return true;
  }
    
  void do_move(int x, int y, int dx, int dy){
    
    
  }
    
  
  

  void move(int index)
  {
    bool moved = false;
    if (movable(x,y)){
      while(!moved){
	int M = rand()%8;
	switch(M){
	case 0: 
    
	  
