
/*
 * to compile this file: gcc cprogram.C -o cprogram
 * to run this file:  ./cprogram
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>
//declare an constant integer called arraysz of size 1000000

const int arraysz = 1000000;

int count=0,lower,upper;
int intarray[arraysz];

int main (int argc, char** argv) {

#pragma omp parallel
{
  printf("Tid is %d\n",omp_get_thread_num());
   
}
   srand(time(NULL));

  //this is an integer array of size arraysz
  

#pragma omp parallel for
  for (int t = 0; t < arraysz-1; t++) //parallelism is posible here. domain decomposition.
  {
    intarray[t]= rand()%100;
  }

   scanf("%d",&lower);
   scanf("%d",&upper);

   
   for (int t = 0; t < arraysz-1; t++) //parallelism is posible here. domain decomposition.
   {
       if(intarray[t] > lower && intarray[t] < upper)
       {
           count++;
       }
   }
   
   printf("In single the numbers in the array are between the lower and upper limits %d times\n",  count);

count=0;

#pragma omp parallel for reduction (+:count)

for (int t = 0; t < arraysz-1; t++) //parallelism is posible here. domain decomposition.
   {
       if(intarray[t] > lower && intarray[t] < upper)
       {
           count++;
       }
   }
   
   printf("In parallel the numbers in the array are between the lower and upper limits %d times\n",  count);
  return 0;

}
