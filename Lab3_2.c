#include <stdio.h>
#include <stdlib.h>

//declare an constant integer called arraysz of size 1000
const int arraysz = 100000;
int total=0;
int searchnum=0;

int main (int argc, char** argv) {

   srand(time(NULL));

  //this is an integer array of size arraysz
  int intarray[arraysz];

  for (int t = 0; t < arraysz-1; t++) //parallelism is posible here. domain decomposition.
  {
    intarray[t]= rand();
  }

  scanf("%d", &searchnum);
   
   
   for (int t = 0; t < arraysz-1; t++) //parallelism is posible here. domain decomposition.
   {
       if(intarray[t]==searchnum)
       {
           total++;
       }
   }
   
  
   
   printf( "%d appears in the array %d times\n",searchnum,total);
   
   
  return 1;

}
