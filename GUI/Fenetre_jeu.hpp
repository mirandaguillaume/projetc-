#ifndef DEF_FENETRE_JEU
#define DEF_FENETRE_JEU

#include "QSFMLCanvas.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

class Fenetre_jeu : public QSFMLCanvas
{
  Q_OBJECT;

public :
  Fenetre_jeu(QWidget* i,const QPoint& p,const QSize& s) : QSFMLCanvas(i,p,s) {height=0;length=0;}
  ~Fenetre_jeu() {}
  void setHeight(int height) {this->height=height;cout<<this->height<<endl;}
  void setLength(int length) {this->length=length;cout<<this->length<<endl;}
  void initialise() {OnInit();}

private :
  int length,height;
  virtual void OnInit();
  virtual void OnUpdate() {}


};

#endif 

