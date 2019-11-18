#include<stdio.h>
 
int main()
{
int i,a,b;
printf("Enter the number whose table you wish to display: ");
scanf("%d",&a);

printf("Enter the number upto to which you want to diplay the table: ");
scanf("%d",&b);

for(i=1;i<=b;i++)
printf("%dx%d=%d \n",a,i,a*i);

}
