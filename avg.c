
#include<stdio.h>

float average(float,float,float,float,float);

int main()
{
float a,b,c,d,e ;
 average(a,b,c,d,e);
 return 0;
}



float average(float a, float b, float c, float d, float e)
{
     float g;
     printf("enter the values of a  b  c  d  e \n");
     scanf("%f  %f  %f  %f  %f",&a, &b ,&c, &d ,&e );
     g = (a+b+c+d+e)/5;
    printf("your average is %f \n",g);
}

