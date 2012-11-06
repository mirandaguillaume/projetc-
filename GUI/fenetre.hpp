#ifndef DEF_FENETRE
#define DEF_FENETRE

#include <QApplication>
#include <QWidget>
#include <QInputDialog>
#include <QMessageBox> 
#include "../src/ants_world.hpp"
#include "../src/termites_world.hpp"
#include "../src/cells_world.hpp"
#include "menu.hpp"
#include "jeu.hpp"

class fenetre : public QWidget
{
  Q_OBJECT;
public : 
  fenetre() : QWidget() {m=new menu(this);j=new jeu(this); j->hide();} 
  ~fenetre() {if (m) delete m; if (j) delete j;}
  void toGame(game g);
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
