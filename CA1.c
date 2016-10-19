//Test program for CA1. To compare best, worst cases of algorithm.

#include <stdio.h>
#include <stdlib.h>


const int arraysz = 100000;
int total=0;
int searchnum=0;

int main (int argc, char** argv) {

   srand(time(NULL));

  //this is an integer array of size arraysz
  int a[arraysz];

  for (int t = 0; t < arraysz-1; t++) 
  {
    a[t]= rand()%100;
  }


   
   
  for (int i=0; i<a.length; i++)
  {
      for(int j=i; j>=1; j-- )
      {
        if (a[j]<a[j-1])
        {
          int temp=a[j];  
          a[j]=a[j-1];
          a[j-1]=temp;
       }
     }
   } 
   
 return 1;

}
