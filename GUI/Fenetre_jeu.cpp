#include "Fenetre_jeu.hpp"

#define NOIR sf::Color(0,0,0)
#define BLANC sf::Color(255,255,255)
#define CASE 30

void Fenetre_jeu::OnInit()
{
  Clear(BLANC);  
  int cpt=0;
  for (int i=0;i<length;i++,cpt++)
    {
      cout<<"i:"<<i<<endl;
      for (int j=0;j<height;j++,cpt++)
	{
	  sf::Color c = (cpt%2?NOIR:BLANC);
	  cout<<"j:"<<j<<endl;
	  Draw(sf::Shape::Rectangle(j*CASE,i*CASE,(j+1)*CASE,(i+1)*CASE,c,true,NOIR));
	}
    }
}
