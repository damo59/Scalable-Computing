#include <stdio.h>
#include <stdlib.h>


 int main()
 {
    srand(time(NULL));
    int a[20][10], b[20][20], mult2[20][20],i, j, k,r=20,c=20;



      /* Storing elements of first matrix. */

     for(i=0; i<r; ++i)
     for(j=0; j<c; ++j)
     {
         a[i][j]=rand()%100;
     }


 /* Storing elements of second matrix. */

     for(i=0; i<r; ++i)
     for(j=0; j<c; ++j)
     {

         b[i][j]=rand()%100;
     }


 /* Initializing elements of matrix mult to 0.*/
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
  
  for(i=0; i<r; ++i)
     for(j=0; j<c; ++j)
     {
         
         if(mult[i][j]!=mult2[i][j])
             result=0;
     }
     if (result==1)
        printf("True\n");
     else
        printf("False\n");
     return 0;
     return 0;
 }







