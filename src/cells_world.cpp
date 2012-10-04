#include "cells_world.hpp"

void cells_world::tour()
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
  int x=rand()%height,y=rand()%height,cpt(0),choice;
  bool done[8];
  for (int i=0;i<height;i++)
    for (int j=0;j<length;j++)
      matrix[i][j]=0;
  while (cpt<3)
    {
      choice=rand()%8;
      if (!done[choice]) 
	{
	  cpt++;
	  done[choice]=true;
	  switch (choice)
	    {
	    case 0 : matrix[x+1][y+1]=true; break; 
	    case 1 : matrix[x+1][y]=true; break; 
	    case 2 : matrix[x+1][y-1]=true; break; 
	    case 3 : matrix[x][y+1]=true; break; 
	    case 4 : matrix[x][y-1]=true; break; 
	    case 5 : matrix[x-1][y+1]=true; break; 
	    case 6 : matrix[x-1][y]=true; break; 
	    case 7 : matrix[x-1][y-1]=true; break; 
	    }
	}
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
