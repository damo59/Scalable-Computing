/*  Name :           Damien Cahill
    Student Number : X00003813
    CA1 Part 1
   
   The purpose of this program is to compare best and  worst cases of the sort algorithm.
   The array is filled with randomly placed values, sorted values and the same value in each element.
   
   The program is run in each case and the execution time measured.
   For all three cases the execution time should be the same because I believe the complexity 
   for best, average and worst cases is the same  O(n^2)
   
   */

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
