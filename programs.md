![GNDEC LOGO](https://camo.githubusercontent.com/8f9bf2581e1036b7f6b66e6d804c08d06226b7b6/687474703a2f2f676e6465632e61632e696e2f7e69637261656374323031362f696d616765732f6c6f676f2e6a7067)

## SUBMITTED BY: JANAV MAKKAR 

## ROLL NUMBER: 19210146 

## BRANCH: IT(A2) 

## SUBMITTED TO: Er. RANJODH KAUR 






### 1. FizzBuzz game 

  
````
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
````




## 2. Program to Find Average of 5 Number

   ````
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

printf("enter the values of a b c d e \n");

scanf("%f %f %f %f %f",&a, &b ,&c, &d ,&e );

g = (a+b+c+d+e)/5;

printf("your average is %f \n",g);

}

````
## 3. Program to Check whether a Number is Even or Odd 
````
#include<stdio.h>

int main()

{

int a ;

printf("please enter the number: ");

scanf("%d",&a);

if (a%2==0)

{printf("number you've entered is an even number\n");}

else

{printf("number you've entered is an odd number\n");}

}
````

## 4. Program to Print a Triangular Star Table

   ````#include<stdio.h>

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
````
## 5.Temperature Convertor Celsius to Fahrenheit and Vice-Versa

  ````#include<stdio.h>

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
````

## 6. Program to Display the table of an Input Number 

   ````#include<stdio.h>

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
````

## 7.Find the Sum of Digits of a Number

   ````#include<stdio.h>

int sum(int c);

int main()

{int a,b ;

printf("enter a number to find the sum of digits of a number:");

scanf("%d",&a);

b=sum(a );

printf("%d\n",b);

}

int sum(int c)

{

int sum=0;int n;

while(c!=0)

{

sum+=c%10;

c=c/10;

}

return sum;}
````

## 8. Program to Compare two numbers

  ````
  #include<stdio.h
void greatNum(); // function declaration

int main(){

greatNum(); // function call return 0;

}

void greatNum(){

int i, j;

printf("Enter 2 numbers that you want to compare... ");

printf("\n");

scanf(" %d", &i);

scanf("%d",&j);

printf("-------------\n");

if(i > j) {

printf("The greater number is: %d\n", i); }

else { printf("The greater number is: %d\n", j); }

}
````

## 9.To print College address
````
 
#include<stdio.h>
int main() {

printf("\n\t\t\tGuru Nanak Dev Engineering College,");
printf("\n\t\t\tGill Road,");
printf("\n\t\t\tLudhiana , Punjab\n\n");

return 0;
}
````

## 10. Program to Find the Factorial of a Number with Recursion
````
#include<stdio.h>
long int multiplyNumbers(int n);
int main() {
    
int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Factorial of %d = %ld\n", n, multiplyNumbers(n));
    return 0;
}
long int multiplyNumbers(int n)
{
    if (n >= 1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}
````

## 11. Program to check if a number is PRIME or NOT
````
#include <stdio.h>
int main()
{
    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(i = 2; i < n; i++)
    {
        if(n%i == 0)
        {
            flag = 1;
       }
    }
 if (n == 1)    {
      printf("1 is neither a prime nor a composite number.");
    }
    else
    {
        if (flag == 0)
          printf("%d is a prime number.", n);
        else
          printf("%d is not a prime number.", n);
    }
    return 0;
}
````

## 12. Program for MATRIX multiplication
````
#include<stdio.h>
int main(){
int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;
printf("enter the number of row=");
scanf("%d",&r);
printf("enter the number of column=");
scanf("%d",&c);
printf("enter the first matrix element=\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the second matrix element=\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&b[i][j]);
}
}

printf("multiply of the matrix=\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
mul[i][j]=0;
for(k=0;k<c;k++)
{
mul[i][j]+=a[i][k]*b[k][j];
}
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",mul[i][j]);
}
printf("\n");
}
return 0;
}
````

## 13. CALCULATOR
````
#include<stdio.h>
int main()
 {
       char operator;
       int a,b;
             printf("Enter an operator(+,-,/,%,*):");
             scanf("%c",&operator);

printf("\nEnter two numbers:\n");
scanf("%d\n %d",&a,&b);
 switch(operator)
                  {
      case'+':  printf("The addition is:%d\n", (a+b) );
       break;
      case'-': printf("The subtraction is:%d\n", (a-b));
       break;
      case'/':printf("The  division is:%d\n", (a/b));
       break;
      case'%': printf("The remainder is:%d\n", (a%b));
       break;
      case'*': printf("The mutiplication is:%d\n", (a*b));
       break;

      default: printf("Enter a valid operator");
       break;
}
}
````
## 14. Program to Find the Total Experience of Employees
````
#include<stdio.h>
int main()
{
int c;
int a,b;
     printf("Enter no. of employees:");
     scanf("%d",&a);
     printf("Enter their experience:");
  for(int i=1;i<=a;i++){
     scanf("%d",&b);
  c+=b;
}
     printf("Total experience:%d",c);
}
````

## 15. To find Area and Volume of Rectangle/Box
````
#include<stdio.h>
int main()
{
 int l,b,h;
   printf("Enter length of rectangle:");
   scanf("%d",&l);
   printf("\nEnter breadth of rectangle:");
   scanf("%d",&b);
   printf("\nEnter height of rectangle:");
   scanf("%d",&h);
   printf("\nThe area of rectangle is:%d",l*b);
   printf("\nThe volume is :%d\n",l*b*h);
 return 0;
 }
 ````

   ## 16. Program to Find if a Number is an Even number or not
   ````
   #include<stdio.h>
int main()
{
int arr[10];
int i;
for(i=0;i<10;i++){
        printf("Enter value of arr[%d]:",i);
        scanf("%d",&arr[i]);
           }

for(i=0;i<10;i++)
        {
       if(arr[i]%2==0){
               printf("\n%d is even.\n",arr[i]);
                     }
}
}
````
## 17 Program to Find the Greatest Number of All


````
#include<stdio.h>
int main()
{
int a;
int arr[10];
   for(a=0;a<10;a++){
      printf("Enter array elements arr[%d]",a);
      scanf("%d",&arr[a]);
}
   for(a=0;a<arr[a];++a){
     if(arr[0]<arr[a])
       arr[0]=arr[a];}
       printf("%d is greater\n",arr[0]);
}
````

## 18. Addition Of Two Numbers
````
#include<stdio.h>
int main()
{
int a,b;
     printf("Enter first no.:");
     scanf("%d",&a);
     printf("Enter second no.:");
     scanf("%d",&b);
int addTwo=a+b;
     printf("Sum:%d+%d=%d",a,b,addTwo);
}
````

## 19. Program to Find Area, Perimeter and Volume of a Square
   ````
    #include<stdio.h>
void square();
int main()
{     
 square();
 return 0;
}                                    
void square()
{
 int side;
   printf("Enter the side of square:");
   scanf("%d",&side);

   printf("\nPerimeter of square:%d",4*side);
   printf("\nArea of square:%d",side*side);
   printf("\nVolume of square:%d\n",side*side*side);
}

````
## 20. Program to Display a Table at Even Positions within a Range of a Given Number

````
#include<stdio.h>
int main()
{
int a,b,c,d,e;
printf("enter start range:");
scanf("%d",&a);
printf("enter end range:");
scanf("%d",&b);
printf("enter last multiply:");
scanf("%d",&c);
for(d=a;d<=b;d++){
if(d%2==0){
for(e=1;e<=c;e++){
printf("%d*%d=%d\n",d,e,(d*e));
}
printf("\n");
}}
}
````
