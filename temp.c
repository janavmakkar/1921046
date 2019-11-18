#include<stdio.h>

int main()
{
 int a ;
 puts("please enter \n 1 if you want to convert from farenheit to celsius \n 2 if you want o convert celsius to farenheit");
 scanf(" %d",&a);

  if(a==1){ float g, h;
     printf("enter the celsius temperature value to be converted to f: ");
     scanf(" %f",&g);
     h=(((g-32)*5)/9);
     printf("\n");
     printf(" %f f \n",h);
           }
  else if(a==2){float i,j;
          printf("enter the farenheit value to be converted to c: ");
          scanf(" %f",&j);
          i=(((j*9)/5)+32);
          printf("\n");
          printf(" %f",i);
                }
  else printf(" enter only valid characters \n");

return 0;
}
