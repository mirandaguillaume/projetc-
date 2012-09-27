#include "monde.hpp"
#include <iostream>

using namespace std;

monde::monde(int i=NBMIN,int j=NBMIN) : height(i), length(j)
{
  matrice = new square*[height];
  for (int n=0;n<height;n++)
    matrice = new square [length];
}
