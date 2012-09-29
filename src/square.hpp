#ifndef DEF_SQUARE
#define DEF_SQUARE

#include <iostream>

using namespace std;

class actor {};

class square
{
public :
  square(int i=0) :nb(i) {}
  square(const square&);
  square& operator = (const square&);
  ~square();
  void affiche(ostream&) const;
  int getNb() const {return nb;}
private :
  int nb;
};

ostream& operator << (ostream&, const square&);

#endif
