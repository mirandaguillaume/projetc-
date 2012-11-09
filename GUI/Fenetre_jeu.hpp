#ifndef DEF_FENETRE_JEU
#define DEF_FENETRE_JEU

#include "QSFMLCanvas.hpp"

class Fenetre_jeu : public QSFMLCanvas
{
  Q_OBJECT;
public :
  Fenetre_jeu(QWidget* i,const QPoint& p,const QSize& s) : QSFMLCanvas(i,p,s) {}
  ~Fenetre_jeu() {}
private :

  virtual void OnInit();
  virtual void OnUpdate() {}


};

#endif 
