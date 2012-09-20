#ifndef DEF_MONDE_BACKGROUND
#define DEF_MONDE_BACKGROUND

#include "monde.hpp"

class monde_background : public monde 
{
public :
  monde_background(int i=10, int j=10);
  monde_background(const monde_background&);
  monde_background& operator=(const monde_background&);
private :
  int** matrice;
};

#endif

