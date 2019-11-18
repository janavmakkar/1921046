#include<stdio.h>

int main()
{
int n;
printf("enter the no. of rows upto which you wish to print the triangular star table: ");
scanf("%d",&n);
printf("\n");

int m=2*n-1;
int A[n][m];

int i,j;
 for(i=1;i<=n;i++)
  {for(j=1;j<=m;j++)
     {
       if(j>=n-i+1 && j<=n+i-1)
         printf("*");
        else
         printf(" ");
      }
   printf("\n"); 
     }
 printf("\n");

return 0;
}
