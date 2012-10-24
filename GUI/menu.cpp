#include "menu.hpp"

#include <iostream>

using namespace std;
menu::menu() : QWidget()
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
  connect (ants_button,SIGNAL(clicked()),this,SLOT(launchAnts()));
  connect (termites_button,SIGNAL(clicked()),this,SLOT(launchTermites()));
  connect (cells_button,SIGNAL(clicked()),this,SLOT(launchCells()));
}

void parameters(int &longueur,int& largeur,int &nbTours,int &vitesse)
{
  do {
    cout<<"Saisissez la largeur du monde : ";cin>>largeur;
  }while(largeur<=0);
  cout<<endl<<endl;

  do {
    cout<<"Saisissez la longueur du monde : ";cin>>longueur;
  }while(longueur<=0);
  cout<<endl<<endl;

  do {
    cout<<"Saisissez le nombre de Tours : ";cin>>nbTours;
  }while(nbTours<=0);
  cout<<endl<<endl;

  do {
    cout<<"Saisissez la vitesse de déroulement du jeu (en secondes) : ";cin>>vitesse;
  }while(vitesse<=0);
  cout<<endl<<endl;
}

void menu::launchAnts()
{
    int largeur,longueur,nbTours,vitesse,nbActeurs;
  parameters(longueur,largeur,nbTours,vitesse); 
  do {
    cout<<"Saisissez le nombre de Fourmis : ";cin>>nbActeurs;
  }while(nbActeurs<=0 || nbActeurs>(longueur*largeur));
  ants_world b(longueur,largeur,nbActeurs,vitesse);
  for (int i=0;i<nbTours;i++)
    {
      cout<<"Tour n°"<<i+1<<endl;
      b.lap();
    }
  cout<<"Je lance les ants"<<endl;
}

void menu::launchTermites()
{
  int largeur,longueur,nbTours,vitesse,nbMorceaux,nbActeurs;
  parameters(longueur,largeur,nbTours,vitesse);
  do {
    cout<<"Saisissez le nombre de Termites : ";cin>>nbActeurs;
  }while(nbActeurs<=0 || nbActeurs>(longueur*largeur));
  cout<<endl<<endl;
 
  do{
    cout<<"Saisissez le nombre de morceaux de bois ! : ";cin>>nbMorceaux;
  }while(nbMorceaux<0);
  termites_world b(longueur,largeur,nbActeurs,nbMorceaux,vitesse);
  for (int i=0;i<nbTours;i++)
    {
      cout<<"Entré dans la boucle"<<endl;
      cout<<"Tour n°"<<i+1<<endl;
      b.lap();
      cout<<"Sorti de la boucle"<<endl;
    }
  cout<<"Je lance les termites"<<endl;
}

void menu::launchCells()
{ 
  int largeur,longueur,nbTours,vitesse;
  parameters(longueur,largeur,nbTours,vitesse); 
  cells_world b(longueur,largeur,vitesse);
  for (int i=0;i<nbTours;i++)
    {
      cout<<"Rentré"<<endl;
      cout<<"Tour n°"<<i+1<<endl;
      b.lap();
    }
  cout<<"Je lance les cells"<<endl;
}

