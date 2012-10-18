#ifndef DEF_ANTS_WORLD
#define DEF_ANTS_WORLD

#include "actors_world.hpp"
#include "ant.hpp"

class ants_world: public actors_world<ant,int>
{

public:
  ants_world(int i=0,int j=0, int nb=3,bool speed=false);
  bool white(int x, int y) const;
  int getNb(int x, int y) const;
  void move(int i);
  void move_up(int i);
  void move_down(int i);
  void move_right(int i);
  void move_left(int i);
  virtual void lap();
  virtual void init();
  void display_informations(int i, int j);

};

#endif
