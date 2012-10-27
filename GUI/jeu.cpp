#include "jeu.hpp"

jeu::jeu(QWidget* parent=NULL) : QWidget(parent)
{
  if (parent!=NULL) 
    {
      //Set window's size
      setFixedSize(600,400);

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
}

void jeu::setGame(game g)
{this->g=g;}

jeu::~jeu()
{
  if (play_button) delete play_button;
  if (fast_button) delete fast_button;
  if (cancel_button) delete cancel_button;
}
