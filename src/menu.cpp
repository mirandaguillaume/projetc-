#ifndef MENU
#define MENU
#include <iostream>
#include "ants_world.cpp"
#include "cells_world.cpp"
#include "termites_world.cpp"

using namespace std;

void menu(){
  int choix(-1);
  do{
    choix=-1;
    int largeur(0),longueur(0),vitesse(0),nbTours(0),nbActeurs(0),nbMorceaux(-1);
  

    cout<<endl
	<<"                   ┌———————————————————————————————————┐"<<endl
	<<"                   │          Jeux Cellulaires         │"<<endl
	<<"                   ├———————————————————————————————————┤"<<endl
	<<"                   │                                   │"<<endl
	<<"                   │                                   │"<<endl
	<<"                   │               MENU                │"<<endl
	<<"                   │                                   │"<<endl
	<<"                   │                                   │"<<endl
	<<"                   │    1 - Les Termites               │"<<endl
	<<"                   │                                   │"<<endl
	<<"                   │                                   │"<<endl
	<<"                   │                                   │"<<endl
	<<"                   │    2 - Les Fourmis                │"<<endl
	<<"                   │                                   │"<<endl
	<<"                   │                                   │"<<endl
	<<"                   │                                   │"<<endl
	<<"                   │    3 - Le Jeu de la vie           │"<<endl
	<<"                   │                                   │"<<endl
	<<"                   │                   (0 pour Quitter)│"<<endl
	<<"                   └———————————————————————————————————┘"<<endl
	<<endl
	<<endl
	<<"Entrez votre choix : ";cin>>choix;
    cout<<endl;


    cout<<endl
	<<"                   ┌———————————————————————————————————┐"<<endl;
    if(choix==1)
      cout<<"                   │            Les Termites           │"<<endl;
    else if (choix==2)
      cout<<"                   │            Les Fourmis            │"<<endl;
    else if (choix==3)
      cout<<"                   │          Le Jeu de la vie         │"<<endl;
  
    cout<<"                   └———————————————————————————————————┘"<<endl
	<<endl
	<<endl;

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

    if(choix==1){
      do {
	cout<<"Saisissez le nombre de Termites : ";cin>>nbActeurs;
      }while(nbActeurs<=0);
 
      do{
	cout<<"Saisissez le nombre de morceaux de bois ! : ";cin>>nbMorceaux;
      }while(nbMorceaux<0);
    }
    else if(choix==2)
      do {
	cout<<"Saisissez le nombre de Fourmis : ";cin>>nbActeurs;
      }while(nbActeurs<=0);
    if(choix==1){
      termites_world b(longueur,largeur,nbActeurs,nbMorceaux,vitesse);
      for (int i=0;i<nbTours;i++){
	cout<<"Tour n°"<<i+1<<endl;
	b.lap();}
    }
    else if(choix==2){
      ants_world b(longueur,largeur,nbActeurs,vitesse);
      for (int i=0;i<nbTours;i++){
	cout<<"Tour n°"<<i+1<<endl;
	b.lap();}
    }
    else if(choix==3){
      cells_world b(longueur,largeur,vitesse);
      for (int i=0;i<nbTours;i++){
	cout<<"Tour n°"<<i+1<<endl;
	b.lap();}
    }
  }
  while(choix!=0);
}
#endif
