#include "actors_world.hpp"

actors_world::actors_world (int i, int j, int nb) : basic_world<int>(i,j), nbActors(nb)
{
  actors = new actor * [nb];
  for (int i=0;i<nb;i++)
    actors[i]=NULL;
}

actors_world::actors_world (const actors_world& a) : basic_world<int>(a), nbActors(a.nbActors)
{
  actors=new actor * [nbActors];
  for (int i=0;i<nbActors;i++)
    actors[i]=a.actors[i]->clonage();
}

actors_world& actors_world::operator = (const actors_world& a)
{
  if (this!=&a)
    {
      if (actors) 
	{
	  for (int i=0;i<nbActors;i++)
	    delete actors[i];
	  delete [] actors;
	}
      nbActors=a.nbActors;
      actors = new actor * [nbActors];
      for (int i=0;i<nbActors;i++)
	actors[i]=a.actors[i]->clonage();
    }
  return *this;
}

actors_world::~actors_world(){
    if (actors)
      for (int i=0;i<nbActors;i++)
	if (actors[i]) delete actors[i];
      delete [] actors;
}
