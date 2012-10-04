#include "basic_world.hpp"

template <typename T>
basic_world<T>::basic_world(int i,int j) : height(i), length(j)
{
  matrix = new T* [height];
  for (int n=0;n<height;n++)
    matrix[n]= new T [length];
}

template <typename T>
basic_world<T>::basic_world(const basic_world& m) : height(m.height), length(m.length)
{
  matrix = new T* [height];
  for (int i=0;i<height;i++)
    {
      matrix[i]=new T [length];
        for (int j=0;j<length;j++)
	  matrix[i][j]=m.matrix[i][j];
    }
}


template <typename T>
basic_world<T>& basic_world<T>::operator = (const basic_world& m)
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
      matrix = new T* [height];
      for (int i=0;i<height;i++)
	{
	  matrix[i] = new T [length];
	  for (int j=0;j<length;j++)
	    matrix [i][j] = m.matrix[i][j];
	}
    }
  return *this;
}

template <typename T>
basic_world<T>::~basic_world()
  {
    if (matrix)
      {
	for (int i=0;i<height;i++)
	  if (matrix[i]) delete [] matrix[i];
	delete [] matrix;
      }
  }
