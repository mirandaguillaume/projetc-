#include "jeu.hpp"
#include <iostream>

#define HEIGHT_CASE 30
#define LENGTH_CASE 30
#define X_POINT_ACCROCHE 200
#define Y_POINT_ACCROCHE 50

jeu::jeu(QWidget* parent) : QWidget(parent)
{
  if (parent==NULL) parent=this; 
  //Set window's size
  setMinimumSize(600,400);
  QPoint p(X_POINT_ACCROCHE,Y_POINT_ACCROCHE);
  QSize s(1200,800);
  plateau = new Fenetre_jeu(this,p,s);
  play_button = new QPushButton("Play",this);
  fast_button = new QPushButton("Fast",this);
  cancel_button = new QPushButton("Return",this);

  //Paramétrer the buttons' police

  play_button->setFont(QFont("Comic Sans MS", 20));
  fast_button->setFont(QFont("Comic Sans MS", 20));
  cancel_button->setFont(QFont("Comic Sans MS", 20));

  //Paramétrer the buttons' position

  play_button->move(50,100);
  fast_button->move(50,160);
  cancel_button->move(50,220);

  // connect(play_button,SIGNAL(clicked()),this,SLOT(lap()));
  // connect(fast_button,SIGNAL(pressed()),this,SLOT(accelTurn()));
  // connect(fast_button,SIGNAL(released()),this,SLOT(slowTurn()));
  connect(cancel_button,SIGNAL(clicked()),parent,SLOT(toMenu()));
}

void jeu::setSize(QWidget* parent,int height,int length,int nbActors)
{
 parent-> setFixedSize(200+(35*length),50+(35*height));
 parent-> setMinimumSize(600,400);
 setFixedSize(200+(35*length),50+(35*height));
 setMinimumSize(600,400);
 plateau -> setFixedSize(length*LENGTH_CASE,height*HEIGHT_CASE);
 plateau -> resize(length*LENGTH_CASE,height*HEIGHT_CASE);
 plateau -> move(X_POINT_ACCROCHE,Y_POINT_ACCROCHE);
 plateau -> setHeight(height);
 plateau -> setLength(length);
 plateau -> initialise();
}

void jeu::setGame(game g)
{this->g=g;}

jeu::~jeu()
{
  if (plateau) delete plateau;
  if (play_button) delete play_button;
  if (fast_button) delete fast_button;
  if (cancel_button) delete cancel_button;
}
