#include <QApplication>
#include "menu.hpp"

int main(int argc,char *argv[])
{
  QApplication app(argc,argv);
  menu m;
  m.show();

  return app.exec();
}
