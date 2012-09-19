#ifndef DEF_MONDE
#define DEF_MONDE

#include <iostream>

using namespace std;

class monde 
{
public:
  monde();
  monde(int, int);
  monde(const monde<T>&);
  monde& operator= (const monde<T>&);
  void affiche(ostream&);
  
private :
  int heigth,length;
};

ostream& operator<<(ostream&, const monde<T>&);

#endif
