#ifndef DEF_ANTS_WORLD
#define DEF_ANTS_WORLD

#include "actors_world.hpp"
#include "ant.hpp"

class ants_world: public actors_world
{

public:
  ants_world(int i=0,int j=0, int nb=3);
  bool white(int x, int y);
  int getNb(int x, int y);
  void move(ant& a);
  void move_up(ant& a);
  void move_down(ant& a);
  void move_right(ant& a);
  void move_left(ant& a);
  void lap();
  void display_informations(int i, int j);

};

#endif
