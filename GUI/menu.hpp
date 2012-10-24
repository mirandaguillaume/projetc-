#ifndef DEF_MENU
#define DEF_MENU

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include "../src/ants_world.hpp"
#include "../src/termites_world.hpp"
#include "../src/cells_world.hpp"
#include "QSFMLCanvas.hpp"

class menu: public QWidget
{

  Q_OBJECT;

public :
  menu();

public slots:
  void launchAnts();
  void launchTermites();
  void launchCells();

private :
  QPushButton* ants_button;
  QPushButton* termites_button;
  QPushButton* cells_button;
  QPushButton* quit_button;
  QSFMLCanvas* Affiche_jeu;
};

#endif
