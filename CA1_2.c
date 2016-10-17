/* Name :           Damien Cahill
   Student Number : X00003813
   CA1 Part 2
   
   The purpose of this program is to first multiply 2 martices together and  then multiply them again using parallelism.
   When the two resultant matrices mult1 & mult2 are compared they should have the same result.
   
   Once the matrices are multiplied mult1 is displayed.
   The two matrices are then compared and if they are identical "True" is printed out, if they are not "False" is printed.
   
   The command to run the program in parallel is
   
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>

 int main()
 {
    srand(time(NULL));
    int a[20][20], b[20][20], mult[20][20],mult2[20][20],i, j, k,r=20,c=20,result=1;



      /* Storing elements of first matrix. */
#pragma omp parallel for private(i,j)
     for(i=0; i<r; ++i)
     for(j=0; j<c; ++j)
     {
         a[i][j]=rand()%100;
     }


 /* Storing elements of second matrix. */
 #pragma omp parallel for private(i,j)
     for(i=0; i<r; ++i)
     for(j=0; j<c; ++j)
     {

         b[i][j]=rand()%100;
     }


 /* Initializing elements of matrix mult to 0.*/
  #pragma omp parallel for private(i,j)
     for(i=0; i<r; ++i)
     for(j=0; j<c; ++j)
     {
        mult[i][j]=0;
     }


 /* Multiplying matrix a and b and storing in array mult. */
     for(i=0; i<r; ++i)
     for(j=0; j<c; ++j)
     for(k=0; k<c; ++k)
     {
         mult[i][j]+=a[i][k]*b[k][j];
     }
  
  /* Multiplying matrix a and b using parallelism and storing in array mult2. */
  #pragma omp parallel for private(i,j,k)
     for(i=0; i<r; ++i)

     for(j=0; j<c; ++j)
     for(k=0; k<c; ++k)
     {
         mult2[i][j]+=a[i][k]*b[k][j];
     }

 /* Displaying the multiplication of two matrix. */

     for(i=0; i<r; ++i)
     for(j=0; j<c; ++j)
     {
         printf("%d ", mult[i][j]);
         if(j==c-1)
             printf("\n ");
     }
printf("\n ");

for(i=0; i<r; ++i)
     for(j=0; j<c; ++j)
     {
         printf("%d ", mult2[i][j]);
         if(j==c-1)
             printf("\n ");
     }
 //#pragma omp parallel for 
  for(i=0; i<r; ++i)
     for(j=0; j<c; ++j)
     {
         
         if(mult[i][j]!= mult2[i][j])
	{
             result=0;
	}
     }

     if (result==1)
        printf("True\n");
     else
        printf("False\n");

    
return 0;
     
 }







