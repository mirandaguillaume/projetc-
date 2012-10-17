#ifndef DEF_ACTORS_WORLD
#define DEF_ACTORS_WORLD

#include "basic_world.hpp"
#include "actor.hpp"

template <typename T>
class actors_world : public basic_world<int>
{
public:
  actors_world(int i=0,int j=0, int nb=5) : basic_world<int>(i,j),nbActors(nb)
  {list = new T [nb];}

  actors_world(const actors_world& a) : basic_world<int>(a),nbActors(a.nbActors)
  {
    list=new T [nbActors];
    for (int i=0;i<nbActors;i++) list[i]=a.list[i];
  } 

  actors_world & operator=(const actors_world& a)
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

protected:
  T * list;
  int nbActors;
};

#endif
