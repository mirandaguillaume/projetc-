#include "basic_world.hpp"
#include <iostream>

using namespace std;

basic_world::basic_world(int i,int j) : height(i), length(j)
{
  matrix = new bool* [height];
  for (int n=0;n<height;n++)
    matrix[n]= new bool [length];
}

basic_world::basic_world (const basic_world& m) : height(m.height), length(m.length)
{
  matrix = new bool* [height];
  for (int i=0;i<height;i++)
    {
      matrix[i]=new bool [length];
        for (int j=0;j<length;j++)
	  matrix[i][j]=m.matrix[i][j];
    }
}

basic_world& basic_world::operator = (const basic_world& m)
{
  if (this!=&m)
    {  
      if (matrix)
	{
	  for (int i=0;i<height;i++)
	    if (matrix[i]) delete [] matrix[i];
	  delete [] matrix;
	}
      height=m.height;
      length=m.length;
      matrix = new bool* [height];
      for (int i=0;i<height;i++)
	{
	  matrix[i] = new bool [length];
	  for (int j=0;j<length;j++)
	    matrix [i][j] = m.matrix[i][j];
	}
    }
  return *this;
}

basic_world::~basic_world()
{
  if (matrix)
    {
      for (int i=0;i<height;i++)
	if (matrix[i]) delete [] matrix[i];
      delete [] matrix;
    }
}


