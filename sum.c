  #include<stdio.h>
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


 
