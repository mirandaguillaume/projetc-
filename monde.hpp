#ifndef DEF_MONDE
#define DEF_MONDE

#include <iostream>
#include "square.hpp"

using namespace std;

class monde 
{
public:
  monde (int,int);
  monde (const monde&);
  monde& operator = (const monde&);
  ~monde();
  int getLength() const {return length;}
  int getHeight() const {return height;}
  
  
private :
  square ** matrice;
  int height,length;
};

#endif
