#include "monde.hpp"
#include <iostream>

using namespace std;

monde::monde(int i,int j) : height(i), length(j)
{
  matrice = new square* [height];
  for (int n=0;n<height;n++)
    matrice[n]= new square [length];
}

monde::monde (const monde& m) : height(m.height), length(m.length)
{
  matrice = new square* [height];
  for (int i=0;i<height;i++)
    {
      matrice[i]=new square [length];
        for (int j=0;j<length;j++)
	  matrice[i][j]=m.matrice[i][j];
    }
}

monde& monde::operator = (const monde& m)
{
  if (this!=&m)
    {  
      if (matrice)
	{
	  for (int i=0;i<height;i++)
	    if (matrice[i]) delete [] matrice[i];
	  delete [] matrice;
	}
      height=m.height;
      length=m.length;
      matrice = new square* [height];
      for (int i=0;i<height;i++)
	{
	  matrice[i] = new square [length];
	  for (int j=0;j<length;j++)
	    matrice [i][j] = m.matrice[i][j];
	}
    }
  return *this;
}

monde::~monde()
{
  if (matrice)
    {
      for (int i=0;i<height;i++)
	if (matrice[i]) delete [] matrice[i];
      delete [] matrice;
    }
}
