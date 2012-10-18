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

  basic_world(int i,int j,int speed): height(i), length(j), _speed(speed)
  {
    matrix = new T* [height];
    for (int n=0;n<height;n++)
      matrix[n]= new T [length];
  } 

  basic_world() : matrix(NULL), length(0), height(0), _speed(1) {}

  basic_world(const basic_world& m) : height(m.height), length(m.length), _speed(m._speed)
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

  basic_world& operator = (const basic_world& m);
  virtual void lap() =0;
  virtual void init() =0;
  virtual void display_informations(int x,int y) = 0;
  void display();
  virtual ~basic_world();
 
protected:
  T ** matrix;
  int height,length;
  int _speed;
};

template <typename T>
inline basic_world<T>&  basic_world<T>::operator = (const basic_world<T>& m)
{
  if (this!=&m)
    {  
      if (matrix)
	{
	  for (int i=0;i<height;i++)
	    if (matrix[i]) delete [] matrix[i];
	  delete [] matrix;
	}
      _speed=m._speed;
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
inline void basic_world<T>::display(){
  for(int l=0;l<length;l++)// boucle pour afficher la ligne du hau
    if(l==0)
      cout<<"┌———";
    else
      cout<<"┬———";
  cout<<"┐"<<endl;
  for(int i=0;i<height;i++)
    {
      for(int j=0;j<length;j++){
	if(matrix[i][j]!=0){
	  display_informations(i,j);// on affiche les informations liés à l'acteur
	}
	else 
	  cout<<"│   ";}
      cout<<"│"<<endl;
      if(i<height-1){
	for(int i=0;i<length;i++) // boucle pour ligne séparatrice
	  {
	    if(i==0)cout<<"├———";
	    else
	      {
		cout<<"┼———";
		if(i==length-1)
		  cout<<"┤"<<endl;
	      }
	  }
      }
    }
  for(int l=0;l<length;l++) // boucle pour afficher la ligne du bas
    if(l==0)cout<<"└———";
    else{cout<<"┴———";}
  cout<<"┘"<<endl;
  sleep(_speed);
  system("clear");
}

template <typename T>
inline basic_world<T>::~basic_world<T>() 
{
  if (matrix)
    {
      for (int i=0;i<height;i++)
	if (matrix[i]) delete [] matrix[i];
      delete [] matrix;
    }
}

 

#endif
