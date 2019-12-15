﻿![GNDEC LOGO](/gndec_image.png)
 
 # PROGRAMMING FOR PROBLEM SOLVING ESC -18105
 
 ## My Programs
|                         |                |
| --------------------   | --------------  |
| 📌 Submitted by           | Janav Makkar    |
| 📌 College Roll Number            | 1921046         |
| 📌 University Roll No.| 1905342|
| 📌 Branch                 | ITA2            |
| 📌 Submitted to           | Er. Ranjodh Kaur| 
___________________________________

|   S.No    | Program Name   |
| ----- | --------------  |
| 1 |   FizzBuzz game |
| 2 |   Find Average of 5 Number |
| 3 |   Even or Odd Checker | 
| 4 |   Triangular Star Table |
| 5 |   Celsius-Farenhiet Convertor |
| 6 |   Table of an Number upto range |
| 7 |   Sum of Digits of a Number |
| 8 |   Compare two Numbers |
| 9 |   Print College Address      |
| 10|   Factorial of a Number  |
| 11|   Prime Checker |
| 12|   Matrix Multiplication|
| 13|   Calculator|
| 14|   To Segregate Even and Odd Values of an Array and Store them in 2 Different Arrays |
| 15|   Sum of Odd or Even Numbers |
| 16|   Find the Largest Element in an array |
| 17|   Sorting an Array in Ascending Order Using Bubble Sort |
| 18|   Matrix Addition |
| 19|   Fibonacci Series |
| 20|   Reverse a Number |
|21 |   Schematics of a calculator|
___________________________________



## 1. FizzBuzz game 

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
##### OUTPUT:-
![FizzBuzz](FizzBuzz.png)
______________________________________________



## 2. Average of 5 Number

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
##### OUTPUT:-
![avgOfFive](averageOfFive.png)
____
## 3. Even or Odd Checker
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
##### OUTPUT:-
![](EvenOddChecker.png)
_________

## 4. Triangular Star Table

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
##### OUTPUT:-
![](StarTable.png)
___________
## 5. Celsius-Farenhiet Convertor

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
##### OUTPUT:-
![](temp.png)
__________
## 6. Table of an Number upto range

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
##### OUTPUT:-
![](Table.png)
_________

## 7. Sum of Digits of a Number

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
##### OUTPUT:-
![](SumOfDigitsOfNumber.png)
____________

## 8. Compare two numbers

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
##### OUTPUT:-
![](NumberCompare.png)
__________

## 9. Print College Address
````
 
#include<stdio.h>
int main() {

puts("Guru Nanak Dev Engineering College");
puts("Gill Road,");
puts("Ludhiana , Punjab");

return 0;
}
````
##### OUTPUT:-
![](PrintAddress.png)
_________

## 10. Factorial of a Number 
````
#include<stdio.h>

int fact(int n);

int main() {
    
int n;

printf("Enter an  integer: ");
    scanf("%d", &n);
    printf("Factorial of %d = %d\n", n, fact(n));
    return 0;
}
int fact(int n)
{
    if (n >= 1)
        return n*fact(n-1);
    else
        return 1;
}
````
##### OUTPUT:-
![](factorial.png)
___________

## 11. Prime Checker
````
#include <stdio.h>
int main()
{
    int n, i, f = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);                                                                                        
    for(i = 1;i<= n; i++)
    {
      if(n%i ==0){ f++; }                                                                                     
     }

     if(f == 2)
       printf("%d is a prime number.\n", n);

     else
       printf("%d is not a prime number.\n", n);


    return 0;
}

````
##### OUTPUT:-
![](PrimeChecker.png)
___________

## 12.  Matrix multiplication
````
#include<stdio.h>

int main()
{

// 1 - declaration  and size of matrices

int r1,c1,c2,i,j,k;
int A[15][15];
int B[15][15];
int C[15][15];

printf("For matrix-A no. of rows: ");
scanf("%d",&r1);

printf("\n");

printf("For matrix-A no. of coloumns and for matrix-B no. of rows: ");
scanf("%d",&c1);

printf("\n");

printf("For matrix-B no. of coloumns: ");
scanf("%d",&c2);

printf("----------------------------------------------------------------");
printf("\n");

// input and initialization of matrices
 for(i=0;i<r1;i++)
  {for(j=0;j<c1;j++)
    {printf("Enter value A[%d][%d]",i+1,j+1);
      scanf("%d",&A[i][j]);
      }
    }

printf("\n");
 for(i=0;i<c1;i++)
  {for(j=0;j<c2;j++)
    {printf("Enter the value of B[%d][%d]",i+1,j+1);
       scanf("%d",&B[i][j]);
      }
    }
    
    printf("\n");
printf("--------------------------------------$

 //LOGIC

 int sum =0;
for(i=0;i<r1;i++)
{for(j=0;j<c2;j++)
  {for(k=0;k<c1;k++)
    { sum = A[i][k]*B[k][j] + sum  ;
      }
      C[i][j]=sum;
       sum=0;
     }
   }

printf("\n");
printf("--------------------------------------$

//Output or Display

printf("\n");

for(i=0;i<r1;i++)
{for(j=0;j<c2;j++)
 { printf(" %d ",C[i][j]);
   }
  printf("\n\n");
 }

printf("\n");
return 0;
}
````
##### OUTPUT:-
![](matmlt_Janav.png)
_____________

## 13. Calculator
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
##### OUTPUT:-
![](calculator.png)
________________________

## 14. To Segregate Even and Odd Values of an Array and Store them in 2 Different Arrays 
````
#include<stdio.h>
int main(){

 int n,i,j=0,k=0;

 printf("enter number of elements ");
 scanf("%d",&n);

printf("enter the elements of the array ");

 printf("\n");

 int a[n],e[n],o[n];
 for( i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }

 for(i=0;i<n;i++)
 {

 if(a[i]%2==0)
  {
   e[j]=a[i];
   j++;
  }

  else
  {
   o[k]=a[i];
   k++;
   }

 }

 printf("Elements in the even array:\n");

 for(i=0;i<j;i++)
 {
  printf(" %d ",e[i]);
  }

 printf("\n");

 printf(" Elements in the odd array:\n");
 
 for(i=0;i<k;i++)
 {
   printf(" %d ",o[i]);
  }

 printf("\n");

return 0;    
}
````
##### OUTPUT:-
![](EOarray.png)
____________

## 15. Sum of Odd or Even Numbers
````
#include<stdio.h>

// a program to find the sum of all odd numbers upto a number declared by the user
//son= sum of odd numbers

int main()
{
 int a,b,d,e,f;
 int c=0,g=0;
 printf("Enter \n1 if you want to find the the sum of odd numbers \n2 if you want o find the sum even n$
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
          scanf("%d",&e);

          for(f=1;f<=e;f++){
             if(f%2==0)
             g=g+f;         }
          printf("\n");
          printf("%d\n",g);
      break;

}
return 0;
}
 ````
 ##### OUTPUT:-
 ![](SumOfEvenOrOddNumbers.png)
  _________
 
   ## 16. Find the Largest Element in an array
   ````
  #include <stdio.h>

int main()
{
    int i, n;
    int arr[20];
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
       {
        printf("Enter element number %d: ",i+1);
        scanf("%d", &arr[i]);
        }

    // storing the largest number to arr[0]

    for(i=1;i<n;i++)
      { if(arr[0]<arr[i])
        { arr[0] = arr[i];
          }
        }
    printf("Largest element = %d\n ", arr[0]);
    return 0;
}
````
##### OUTPUT:-
![](LargestElementWithinArray.png)
___________

## 17 Sorting an Array in Ascending Order Using Bubble Sort 


````

#include<stdio.h>

int main()
{
    int arr[50], i, j, n, temp;
    printf("Enter total number of elements to store: ");
    scanf("%d", &n);
    printf("Enter %d elements:", n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("\nSorting array using bubble sort technique...\n");
    for(i=0; i<(n-1); i++)
    {
        for(j=0; j<(n-i-1); j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("All Array elements sorted successfully!\n");
    printf("Array elements in ascending order:\n\n");
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);

    return 0;
}
````
##### OUTPUT:-
![](BubbleSort.png)
____________

## 18. Matrix Addition
````
#include <stdio.h>

int main()
{
   int m, n, c, d, first[10][10], second[10][10], sum[10][10];

   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);
   printf("Enter the elements of first matrix\n");

   for (c = 0; c < m; c++)
      for (d = 0; d < n; d++)
         scanf("%d", &first[c][d]);

   printf("Enter the elements of second matrix\n");

   for (c = 0; c < m; c++)
      for (d = 0 ; d < n; d++)
         scanf("%d", &second[c][d]);

   printf("Sum of entered matrices:-\n");

   for (c = 0; c < m; c++) {
      for (d = 0 ; d < n; d++) {
         sum[c][d] = first[c][d] + second[c][d];
         printf("%d\t", sum[c][d]);
      }
      printf("\n");
   }

   return 0;
}
````
##### OUTPUT:-
![](MatrixAddition.png)
__________

## 19. Fibonacci Series
   ````
#include <stdio.h>

int fib(int);

int main()
{
  int i,n;                                                                                                                 
  printf("Enter the number upto which you wish to print the fibonacci series: ");
  scanf("%d", &n);

  for(i=0;i<=n;i++)
    printf("%d\t",fib(i));
 printf("\n");
  return 0;
}

int fib(int n)
{
if(n<=1){return 1;}
else if(n>1){return fib(n-1)+fib(n-2);}
}

````
##### OUTPUT:-
![](Fibonacci.png)
_______________

## 20. Reverse a Number

````
#include <stdio.h>
int main()
{
  int n, r = 0;

  printf("Enter a number to reverse\n");
  scanf("%d", &n);

  while (n != 0)
  {
    r = r * 10;
    r = r + n%10;
    n = n/10;
  }

  printf("Reverse of the number = %d\n", r);

  return 0;
}
````
##### OUTPUT:-
![](ReverseNum.png)
______________

## 21. Schematics of a calculator

```
#include <stdio.h>
int main()
{
puts("__________________");
puts("|                |");
puts("|________________|");
puts("|  1 | 2 | 3 |   |");
puts("|____|___|___|   |");
puts("|  4 | 5 | 6 | + |");
puts("|____|___|___|___|");
puts("|  7 | 8 | 9 |   |");
puts("|____|___|___| = |");
puts("|  - | * | / |   |");
puts("|____|___|___|___|");
return 0;
}
```
### OUTPUT:-
![](CalculatorSchematics.png)





____________
### Thankyou 🙏

