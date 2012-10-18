#ifndef DEF_TERMITE_WORLD
#define DEF_TERMITE_WORLD

#include "termite.hpp"
#include "actors_world.hpp"

class termites_world : public actors_world<termite,int>
{
public : 
  termites_world(int x, int y, int nb_t, bool speed);
  bool carry(int x,int y);
  bool occuped(int x, int y) const {return matrix[x][y]<0;}
  int getWood(int x, int y);
 
  bool movable(int x, int y);    
  void do_move(int dx, int dy, int index);
  bool verif_move(int dx, int dy, int index);
  void move(int index);
  virtual void lap();
  virtual void init();
  void display_informations(int y,int x);
};

#endif
