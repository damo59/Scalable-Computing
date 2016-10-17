#include <iostream>
using namespace std;

int main()
{
  int intarray[1000000];
  for (int i = 0; i < arraysz-1; i++)   //parallelism is posible here. domain decomposition.

  {

    intarray[i]= rand()%100;

  }
  
  
}
