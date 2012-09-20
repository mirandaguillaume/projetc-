#include <iostream>
#include "monde.hpp"
#include "monde_background.hpp"

using namespace std;

int main()
{
  monde m(3,2);
  monde_background mm,mm2(mm);
  cout<<mm2.getHeight()<<" "<<mm2.getLength()<<endl;
  return 0;
}
