#include <iostream>
#include "termites_world.hpp"
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  srand(time(NULL));
  termites_world b(4,4,3,true);
  b.display();
  for (int i=0;i<20;i++)
    cout<<"tour"<<i<<endl;
    b.lap();
  return 0;
}
