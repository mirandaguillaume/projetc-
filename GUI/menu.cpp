#include "menu.hpp"

#include <iostream>

using namespace std;
menu::menu(QWidget* parent) : QWidget(parent)
{
  if (parent!=NULL)
    {
      //Set the window's size 
      setFixedSize(600,400);

      //Creation of the buttons
      ants_button = new QPushButton ("Ants' Life",this);
      termites_button = new QPushButton ("Termites' Life",this);
      quit_button = new QPushButton ("Quit",this);
      cells_button = new QPushButton ("Cells' Life",this);

      //Paramétrer the buttons' police

      ants_button->setFont(QFont("Comic Sans MS", 20));
      termites_button->setFont(QFont("Comic Sans MS", 20));
      cells_button->setFont(QFont("Comic Sans MS", 20));
      quit_button->setFont(QFont("Comic Sans MS", 20));

      //Paramétrer the buttons' position

      ants_button->move(50,100);
      termites_button->move(50,160);
      cells_button->move(50,220);
      quit_button->move(50,280);

      connect (quit_button,SIGNAL(clicked()),qApp,SLOT(quit()));
      connect (ants_button,SIGNAL(clicked()),parent,SLOT(launchAnts()));
      connect (termites_button,SIGNAL(clicked()),parent,SLOT(launchTermites()));
      connect (cells_button,SIGNAL(clicked()),parent,SLOT(launchCells()));
    }
}

