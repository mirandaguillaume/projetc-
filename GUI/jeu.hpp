#ifndef DEF_JEU
#define DEF_JEU

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include "QSFMLCanvas.hpp"
#include "../src/basic_world.hpp"

class jeu : public QWidget
{
public :
  jeu(QWidget* i);

private :
  basic_world* world;
  QSFMLCanvas* plateau;
  QPushButton* play_button; 
  QPushButton* fast_button;
  QPushButton* cancel_button;
};

