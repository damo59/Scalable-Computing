
/*
 * to compile this file: gcc cprogram.C -o cprogram
 * to run this file:  ./cprogram
 */
#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
//declare an constant integer called arraysz of size 1000
const int arraysz = 100000;
int max=0;
int main (int argc, char** argv) {

   srand(time(NULL));

  //this is an integer array of size arraysz
  int intarray[arraysz];

  for (int t = 0; t < arraysz-1; t++) //parallelism is posible here. domain decomposition.
  {
    intarray[t]= rand()%100;
  }

   max=intarray[0];
   
   for (int t = 1; t < arraysz-1; t++) //parallelism is posible here. domain decomposition.
   {
       if(intarray[t]>max)
       {
           max=intarray[t];
       }
   }
   
   printf("%d is the maximum value in the array",  max);
  return 1;

}
