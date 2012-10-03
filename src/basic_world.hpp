#ifndef DEF_BASIC_WORLD
#define DEF_BASIC_WORLD

#include <iostream>

using namespace std;

class basic_world 
{
public:
  basic_world (int,int);
  basic_world (const basic_world&);
  basic_world& operator = (const basic_world&);
  ~basic_world();
  virtual void tour() =0;
  virtual void init() =0;
  virtual void affiche(); //On verra si on redéfini plus tard
  
 
private :
  bool ** matrix;
  int height,length;
};

#endif
