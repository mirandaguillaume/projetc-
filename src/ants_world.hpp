#ifndef DEF_ANTS_WORLD
#define DEF_ANTS_WORLD

#include "actors_world.hpp"
#include "ant.hpp"

class ants_world: public actors_world<ant>
{

public:
  ants_world(int i,int j, int nb); 
  ants_world(const ants_world& m);
  ants_world & operator=(const ants_world& m);
  bool white(int x, int y) const;
  int getNb(int x, int y) const;
  void move(int i);
  void move_up(int i);
  void move_down(int i);
  void move_right(int i);
  void move_left(int i);
  virtual void lap();
  void display_informations(int i, int j);

};

#endif
