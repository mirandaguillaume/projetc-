#include "monde_background.hpp"

monde_background::monde_background(int i,int j) : monde(i,j)
{
  matrice=new int*[i];
  for (int n=0;n<i;n++)
    matrice[n]=new int[j];
}

monde_background::monde_background(const monde_background& m) : monde(m.height,m.length)
{
  matrice=new int*[m.height];
  for (int i=0;i<m.height;i++)
    {
      matrice[i]=new int [m.length];
      for (int j=0;j<length;j++)
	matrice[i][j]=m.matrice[i][j];
    }
}

monde_background& monde_background::operator = (const monde_background& m)
{
  if (this!=&m)
    {
      if (matrice)
	{
	  for (int i=0;i<length;i++)
	    delete matrice[i];
	  delete matrice;
	}
    }
  return *this;
}

