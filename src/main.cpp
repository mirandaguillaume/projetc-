#include <iostream>
#include "termites_world.hpp"
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  srand(time(NULL));
  int i;
  termites_world b(4,4,5,true);
  b.display();
  for (i=0;i<20;i++)
    b.lap();
  return 0;
}
