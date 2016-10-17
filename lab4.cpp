
#include <iostream>
#include <omp.h>
using namespace std;

int main()
{
  int num1,num2,arraysz=1000000,count;
  int intarray[arraysz];
  for (int i = 0; i < arraysz-1; i++)   //parallelism is posible here. domain decomposition.

  {

    intarray[i]= rand()%100;

  }
  
  cout << "Enter 2 limits: ";
  cin >> num1 >> num2;
  
  for (int  i=0;i<arraysz-1;i++)
  {
    if(intarray[i]<num2 && intarray[i]>num1)
    {
      count++;
    }
  }
  
  cout <<"The number of instances is "<<count;
}
