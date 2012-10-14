#ifndef DEF_TERMITE_WORLD
#define DEF_TERMITE_WORLD

#include "actors_world.hpp"

class termites_world : public actors_world
{
public : 
  termites_world(int x, int y, int nb_t, int nb_w);
  
  void display_informations(int y,int x){
    if(occuped(y,x))
      {
	if(carry(y,x))	
	  cout<<"│\033[31mT\033[00m "<<getWood();
	else
	  cout<<"│\033[34mT\033[00m "<<getWood();
      }
    else  
      cout<<" "<<getWood<<" ";}
  
};
#endif
