#ifndef DEF_BASIC_WORLD
#define DEF_BASIC_WORLD

#include <iostream>

using namespace std;


template <typename T=int>
class basic_world 
{
public:
  basic_world<T>() : matrix(NULL), length(0), height(0) {}
  basic_world<T> (int,int);
  basic_world<T> (const basic_world&);
  basic_world& operator = (const basic_world&);
  virtual void tour() =0;
  virtual void init() =0;
  void affiche(); //On verra si on redéfini plus tard
  virtual ~basic_world(); 

 
protected:
  T ** matrix;
  int height,length;
};

#endif
