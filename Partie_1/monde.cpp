#include "monde.hpp"
#include <iostream>

using namespace std;

template <class T>
monde<T>::monde() : heigth(10),length(10)
{
  tab = new T [heigth];
  for (int i=0;i<heigth;i++)
    tab[i] = new T [length];
} 

template <class T>
monde<T>::monde(int heigth,int length) : heigth(heigth), length(length)
{
  tab=new T [heigth];
  for (int i=0;i<heigth;i++)
    tab[i]=new T [length];
}

template <class T>
monde<T>::monde(const monde<T>& m) : heigth(m.heigth), length(m.length)
{
  tab=new T [heigth];
  for (int i=0;i<heigth;i++)
    tab[i]=new T [length];
}

template <class T>
monde<T>& monde<T>::operator = (const monde<T>& m)
{
  if (this!=&m)
    {
      heigth=m.heigth;
      length=m.length;
      if (tab) 
	{
	  for (int i=0;i<heigth;i++)
	    delete [] tab[i];
	  delete [] tab;
	}
    }
  return *this;
}
