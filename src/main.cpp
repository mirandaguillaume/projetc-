#include <iostream>
#include "cells_world.hpp"
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  srand(time(NULL));
  int i;
  cells_world b(4,4);
  b.init(true);
  b.display();
  for (i=0;(i<4  && !b.plein());i++)
    b.lap();
  if (b.plein())
    cout<<"Le monde est rempli en "<<i<<" tours"<<endl;
  return 0;
}
