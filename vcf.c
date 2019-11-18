
#include<stdio.h>

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
