#ifndef DEF_JEU
#define DEF_JEU

#include <QWidget>
#include <QPushButton>
#include "QSFMLCanvas.hpp"

enum game { cells , ants , termites }; 

class jeu : public QWidget
{
public :
  jeu(QWidget*);
  ~jeu();
  void setGame(game g);

private:
  QPushButton* play_button;
  QPushButton* fast_button;
  QPushButton* cancel_button;
  QSFMLCanvas* plateau;
  game g;
};

#endif
