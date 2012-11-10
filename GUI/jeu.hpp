#ifndef DEF_JEU
#define DEF_JEU

#include <QWidget>
#include <QPushButton>
#include "Fenetre_jeu.hpp"

enum game { cells , ants , termites }; 

class jeu : public QWidget
{
public :
  jeu(QWidget* parent = NULL);
  ~jeu();
  void setGame(game g);
  void setSize(QWidget* parent,int height,int length,int nbActors);

private:
  QPushButton* play_button;
  QPushButton* fast_button;
  QPushButton* cancel_button;
  Fenetre_jeu* plateau;
  game g;
};

#endif
