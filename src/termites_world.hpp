#ifndef DEF_TERMITE_WORLD
#define DEF_TERMITE_WORLD

#include "actors_world.hpp"

class termite_world : public actors_world
{
public : 
  termite_world(int x, int y, int nb_t, int nb_w) : actors_world(x,y,nb_t) 
  {
    int xp, yp;
    while (nb_t!=0)
      for(int i = nb_t; i !=0; i--)
	{
	  xp = rand()%x;
	  yp = rand()%y;
	  if(!occuped(xp,yp))
	    actors[nb_t-1] = new termite (xp, yp);
	  
	  
