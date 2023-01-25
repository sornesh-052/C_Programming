#include<stdio.h>  
int main()
{
int num;
printf("enter a number ");
scanf("%d",&num);
if(num%2==0)
printf("the given num is even");
else if(num==0)
printf("neither odd nor even");
else
printf("the given number is odd");
}
