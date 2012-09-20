#include <iostream>
#include "monde.hpp"

using namespace std;

int main()
{
  monde m(3,2);
  cout<<m.getHeight()<<" "<<m.getLength()<<endl;
  return 0;
}
