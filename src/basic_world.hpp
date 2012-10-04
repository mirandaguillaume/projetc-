#ifndef DEF_BASIC_WORLD
#define DEF_BASIC_WORLD

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


template <typename T=int>
class basic_world 
{
public:

  basic_world (int i,int j): height(i), length(j)
  {
    matrix = new T* [height];
    for (int n=0;n<height;n++)
      matrix[n]= new T [length];
  } 

  basic_world() : matrix(NULL), length(0), height(0) {}

  basic_world(const basic_world& m) : height(m.height), length(m.length)
  {
    cout<<"ok"<<endl;
    matrix = new T* [height];
    for (int i=0;i<height;i++)
      {
	matrix[i]=new T [length];
        for (int j=0;j<length;j++)
	  matrix[i][j]=m.matrix[i][j];
      }
  }

  basic_world& operator = (const basic_world& m)
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

  virtual void tour() =0;
  virtual void init() =0;
  void affiche(); //On verra si on redéfini plus tard
 
  virtual ~basic_world() 
  {
    if (matrix)
      {
	for (int i=0;i<height;i++)
	  if (matrix[i]) delete [] matrix[i];
	delete [] matrix;
      }
  }

 
protected:
  T ** matrix;
  int height,length;
};

#endif
