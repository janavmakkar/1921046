#include<stdio.h>

int main()
{

// 1 - declaration  and size of matrices

int m,n,j;
int A[m][n];
int B[n][j];
int C[m][j];

printf("For matrix-A no. of rows: ");
scanf("%d",&m);

printf("\n");

printf("For matrix-A no. of coloumns and for matrix-B no. of rows: ");
scanf("%d",&n);

printf("\n");

printf("For matrix-B no. of coloumns: ");
scanf("%d",&j);

printf("\n");

printf("----------------------------------------------------------------");
printf("\n");

// input and initialization of matrices

int p,q,r;

 for(p=0;p<n;p++)

  {for(q=0;q<m;q++)

    {printf("Enter value A[%d][%d]",q+1,p+1);

      scanf("%d",&A[q][p]);

      }

   }

printf("\n");

 for(r=0;r<j;r++)

  {for(p=0;p<n;p++)
						
    {printf("Enter the value of B[%d][%d]",p+1,r+1);

       scanf("%d",&B[p][r]);

      }

  }


printf("\n");
printf("---------------------------------------------------------------------");

//LOGIC
int sum =0;
for(q=0;q<m;q++)

{for(r=0;r<j;r++)
            
  {for(p=0;p<n;p++)
                
    { C[q][r] += A[q][p]*B[p][r];
                                 			     										
         }
   
        
     }

   }

printf("\n");
printf("--------------------------------------------------------------------");

//Output or Display

printf("\n");

for(q=0;q<m;q++)
{for(r=0;r<j;r++)
  {
  printf("%d\t",C[q][r]);
    }
  
  }

printf("\n");
return 0;


}
