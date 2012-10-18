#ifndef DEF_TERMITE_WORLD
#define DEF_TERMITE_WORLD

#include "termite.hpp"
#include "actors_world.hpp"

class termites_world : public actors_world<termite,int>
{
  int nbWood;
public : 
  termites_world(int x, int y, int nb_t,int speed,int nbWood);
  bool carry(int x,int y); // boléen pour savoir si la termite porte du bois
  bool occuped(int x, int y) const {return matrix[x][y]<0;}//savoir si il y a une termite sur la case
  int getWood(int x, int y);
 
  bool verif_move(int dx, int dy, int index);
  bool movable(int x, int y);// savoir si la termite peux bouger    
  void move(int index);
  void do_move(int dx, int dy, int index);//effectuer le mouvement
  virtual void lap();
  virtual void init();
  void display_informations(int y,int x);
};

#endif
