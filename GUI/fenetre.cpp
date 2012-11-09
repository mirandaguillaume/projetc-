#include "fenetre.hpp"
#include <sstream>

QString toString(int n)
{
  std::ostringstream out;
  out << n;
  QString s=QString::fromStdString(out.str());
  return s;
}

void fenetre::toGame(game g)
{
  int height(0),length(0),nbActors(0);
  while (height<=0 || height > 20)
    {
      height = QInputDialog::getInteger(this, "Longueur", "Longueur voulue");
      if (height<=0) QMessageBox::critical(this,"Largeur","La longueur ne peut pas etre negative ou nulle");
      if (height>20) QMessageBox::critical(this,"Largeur","La longueur maximale est de 20");
    } 
  while (length<=0 || length > 20)
    { 
      length = QInputDialog::getInteger(this, "Largeur", "Longueur voulue");
      if (length<=0) QMessageBox::critical(this,"Largeur","La largeur ne peut pas etre negative ou nulle");
      if (length>20) QMessageBox::critical(this,"Largeur","La largeur maximale est de 20");
    }
  if (g!=cells)
    while (nbActors<=0 || nbActors>(height*length))
      {
	nbActors = QInputDialog::getInteger(this,"Nombre de pions","Nombre d'insectes attendus");
	if (nbActors<=0) QMessageBox::critical(this,"Nombre de pions","La largeur ne peut pas etre negative ou nulle");
	QString MessageError("Le nombre de pions maximal est de ");
	MessageError+=toString(height*length);
	if (nbActors>20) QMessageBox::critical(this,"Largeur",MessageError);
      }
  m -> hide();
  j->show();
  j->setSize(this,length,height,nbActors);
  j->setGame(g);
}

void fenetre::toMenu()
{
  j->hide();
  setFixedSize(600,400);
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

