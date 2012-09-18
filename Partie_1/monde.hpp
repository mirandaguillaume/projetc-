#ifndef DEF_MONDE
#define DEF_MONDE

#include <iostream>

using namespace std;

template <class T>
class monde 
{
public:
  monde();
  monde(int, int);
  monde(const monde<T>&);
  monde& operator= (const monde<T>&);
  void affiche(ostream&);
  
private :
  T *** tab;
  int heigth,length;
};

template <class T> ostream& operator<<(ostream&, const monde<T>&);

#endif
