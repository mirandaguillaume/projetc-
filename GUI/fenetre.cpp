#include "fenetre.hpp"

void fenetre::toGame(game g)
{
  m->hide();
  j->show();
  j->setGame(g);
}

void fenetre::toMenu()
{
  j->hide();
  m->show();
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

void fenetre::launchAnts()
{
  toGame(ants);/*
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
    cout<<"Je lance les ants"<<endl;*/
}

void fenetre::launchTermites()
{
  toGame(termites);
/*
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
    cout<<"Je lance les termites"<<endl;*/
}

void fenetre::launchCells()
{ 
  toGame(cells);
  /*int largeur,longueur,nbTours,vitesse;
  parameters(longueur,largeur,nbTours,vitesse); 
  cells_world b(longueur,largeur,vitesse);
  for (int i=0;i<nbTours;i++)
    {
      cout<<"Rentré"<<endl;
      cout<<"Tour n°"<<i+1<<endl;
      b.lap();
    }
  cout<<"Je lance les cells"<<endl;
  */
}

