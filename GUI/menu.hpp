#ifndef DEF_MENU
#define DEF_MENU

#include <SFML/Graphics.hpp>
#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include "../src/ants_world.hpp"
#include "../src/termites_world.hpp"
#include "../src/cells_world.hpp"

class menu : public QWidget, public sf::RenderWindow
{

  Q_OBJECT;

public :
  menu(unsigned int FrameTime=0);

public slots:
  void launchAnts();
  void launchTermites();
  void launchCells();

private :
  QPushButton* ants_button;
  QPushButton* termites_button;
  QPushButton* cells_button;
  QPushButton* quit_button;
};

#endif
