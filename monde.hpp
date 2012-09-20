#ifndef DEF_MONDE
#define DEF_MONDE

#include <iostream>

using namespace std;

class monde 
{
public:
  monde(int height=10, int length=10) : height(height) , length(length) {}
  int getLength() const {return length;}
  int getHeight() const {return height;}
  
protected :
  int height,length;
};

#endif
