#ifndef DEF_CELLS_WORLD
#define DEF_CELLS_WORLD

#include "basic_world.hpp"

class cells_world : public basic_world<bool>
{
public :
  cells_world(int i=0,int j=0) : basic_world<bool>(i,j) {}
  virtual void lap();
  virtual void init(bool);
  int count_neighbour(int i,int j);
  virtual ~cells_world() {}
  virtual void display_informations(int x,int y);
  bool plein();
  bool vide();
};

#endif
