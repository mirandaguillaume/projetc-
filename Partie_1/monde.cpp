#include "monde.hpp"
#include <iostream>

using namespace std;

template <class T>
monde<T>::monde(int heigth=10,int length=10) : heigth(heigth), length(length)
{
  tab=new T [heigth];
  for (int i=0;i<heigth;i++)
    tab[i]=new T [length];
}


