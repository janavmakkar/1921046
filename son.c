#include<stdio.h>

// a program to find the sum of all odd numbers upto a number declared by the user
//son= sum of odd numbers

int main()
{
 int a,b,c,d,e,g,f;
 
 printf("Enter \n1 if you want to find the the sum of odd numbers \n2 if you want o find the sum even numbers: ");
 scanf("%d",&d); 

switch(d)
{
 case 1 : printf("upto what number you would like to find the sum of odd numbers: ");
          scanf("%d",&b);
 
          for(a=1;a<=b;a++){ 
             if(a%2!=0)
             c = c+a ;        }
          printf("\n");
          printf ("%d\n",c);
     break;

 case 2 : printf("upto what number you would like to find the sum even numbers: ");
          scanf("%d",e);
          
          for(f=1;f<=e;f++){
             if(f%2==0)  
             g=g+f;         }         
          printf("\n");
          printf("%d\n",g);
      break;


return 0;

}
}
