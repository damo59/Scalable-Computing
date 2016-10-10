/*
 * to compile this file: gcc cprogram.C -o cprogram
 * to run this file:  ./cprogram
 */
#include <stdio.h>
#include <stdlib.h>

typedef enum { false, true } bool;

//declare one of our own functions so the compiler will understand the references below
int Average(int intarray[] );
int Median(int intarray[] );

//declare an constant integer called arraysz of size 100000
const int arraysz = 100000;



int main (int argc, char** argv) {

  

  //this is an integer array of size arraysz
  int intarray[arraysz];

  for (int i = 0; i < arraysz-1; i++) 
  {
    intarray[i]= rand();
  }

 //call the function by using its name and giving it correct parameters
  printf("Average is %d\n",Average(intarray));
  printf("Median is %d",Median(intarray));

  return 1;

}

// this is the implementation of the function declared above
int Average (int intarray[]) {
    int total,average;
  for (int i = 0; i < arraysz-1; i++) {
    total=total+intarray[i];
  }
  
  average=total/arraysz;
  return average;
}

// this is the implementation of the function declared above
int Median (int intarray[]) {
    bool sorted=false;
    
    while(!sorted)
    {
     sorted=true;
     for (int i = 0; i < arraysz-1; i++)
     {
       if(intarray[i]>intarray[i+1])
       {
           int temp= intarray[i];
           intarray[i]=intarray[i+1];
           intarray[i+1]=temp;
           sorted=false;
       }
     }
    }
    
    return (intarray[(arraysz/2)-1]+intarray[arraysz/2])/2;
}
