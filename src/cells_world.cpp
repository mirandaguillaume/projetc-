#include "cells_world.hpp"

void cells_world::lap()
{
  int nbNeighbour;
  for (int i=0;i<height;i++)
    for (int j=0;j<length;j++)
      {
	nbNeighbour=count_neighbour(i,j);
	if (matrix[i][j] && nbNeighbour!=3 && nbNeighbour!=2)
	  matrix[i][j]=false;
	else if (!matrix[i][j] && nbNeighbour==3)
	  matrix[i][j]=true;
      }
  display();
}


void cells_world::init()
{
  int i,j;
  for (int n=0;n<(height*length)/3;n++)
    {
      do {
	i=rand()%height;
	j=rand()%length;
      } while (matrix[i][j]);
      matrix[i][j]=true;
    }
}

int cells_world::count_neighbour(int i,int j)
{
  int cpt(0);
  if (matrix[(i-1+height)%height][(j-1+length)%length]) cpt++;
  if (matrix[(i-1+height)%height][j]) cpt++;
  if (matrix[(i-1+height)%height][(j+1)%length]) cpt++;
  if (matrix[i][(j-1+length)%length]) cpt++;
  if (matrix[i][(j+1)%length]) cpt++;
  if (matrix[(i+1)%height][(j-1+length)%length]) cpt++;
  if (matrix[(i+1)%height][j]) cpt++;
  if (matrix[(i+1)%height][(j+1)%length]) cpt++;
  return cpt;
}

void cells_world::display_informations(int i,int j)
{
  if(matrix[i][j])
    cout<<"│\033[31m(O)\033[00m";
  else
    cout<<"│   ";
}

