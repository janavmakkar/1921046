#include<stdio.h>

int main()
{int i,n;
 printf("enter upto what number do you wish to execute FizzBuz: ");
 scanf("%d",&n);
  for(i=1;i<=n;i++)
{ if(i%15==0){printf("Fizz Buzz\n");}
 else if(i%3==0){printf("Fizz\n");}
 else if(i%5==0){printf("Buzz\n");}
 else printf("%d\n",i); }
return 0;
 }

