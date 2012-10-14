#include "cells_world.hpp"

void cells_world::lap()
{
  for (int i=0;i<height;i++)
    for (int j=0;j<length;j++)
      if (count_neighbour(i,j)>3)
	matrix[i][j]=true;
      else
	matrix[i][j]=false;
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
  if (matrix[i-1][j-1]) cpt++;
  if (matrix[i-1][j]) cpt++;
  if (matrix[i-1][j+1]) cpt++;
  if (matrix[i][j-1]) cpt++;
  if (matrix[i][j+1]) cpt++;
  if (matrix[i+1][j-1]) cpt++;
  if (matrix[i+1][j]) cpt++;
  if (matrix[i+1][j+1]) cpt++;
  return cpt;
}

void cells_world::display_informations()
{
  if(matrix[i][j])
    cout<<"│\033[31m(O)\033[00m";
  else
    cout<<"│   ";
}

