#ifndef DEF_MENU
#define DEF_MENU

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include "../src/ants_world.hpp"
#include "../src/termites_world.hpp"
#include "../src/cells_world.hpp"
#include "QSFMLCanvas.hpp"


class menu : public QWidget
{
public :
  menu(QWidget* i=NULL);

private :
  QPushButton* ants_button;
  QPushButton* termites_button;
  QPushButton* cells_button;
  QPushButton* quit_button;
};

#endif
