#ifndef DEF_JEU
#define DEF_JEU

#include <QWidget>
#include <QPushButton>
#include "Fenetre_jeu.hpp"

enum game { cells , ants , termites }; 

class jeu : public QWidget
{
public :
  jeu(QWidget* parent = NULL,int heigth =10,int length =10);
  ~jeu();
  void setGame(game g);
  void setSize(QWidget* parent,int height,int length);

private:
  QPushButton* play_button;
  QPushButton* fast_button;
  QPushButton* cancel_button;
  QSFMLCanvas* plateau;
  game g;
};

#endif
