#ifndef DEF_ACTORS_WORLD
#define DEF_ACTORS_WORLD

#include "basic_world.hpp"
#include "actor.hpp"

template <typename T,typename D>
class actors_world : public basic_world<D>
{
public:
  actors_world(int i=0,int j=0, int nb=5,bool speed=false) : basic_world<D>(i,j,speed),nbActors(nb)
  {list = new T [nb];}

  actors_world(const actors_world& a) : basic_world<D>(a),nbActors(a.nbActors)
  {
    list=new T [nbActors];
    for (int i=0;i<nbActors;i++) list[i]=a.list[i];
  } 

  actors_world& operator=(const actors_world& a)
  {
    if (this!=&a)
      {
	if (list) delete [] list;
	nbActors=a.nbActors;
	list = new T [nbActors];
	for (int i=0;i<nbActors;i++)
	  list[i]=a.list[i];
      }
    return *this;
  } 

  ~actors_world() { delete [] list;}

  virtual void lap() =0;
  virtual void init() =0;
  virtual void display_informations(int x,int y) =0;

protected:
  T * list;
  int nbActors;
};

#endif
