#ifndef DEF_FENETRE
#define DEF_FENETRE

#include <QApplication>
#include <QWidget>
#include "../src/ants_world.hpp"
#include "../src/termites_world.hpp"
#include "../src/cells_world.hpp"
#include "menu.hpp"

class fenetre : public QWidget
{
  Q_OBJECT;
public : 
  fenetre() : QWidget() {m=new menu(this);} 
  ~fenetre() {if (m) delete m;}
public slots:
  void launchAnts();
  void launchTermites();
  void launchCells();
  void toMenu();

private:
  menu* m;
  jeu* j;
};

#endif
