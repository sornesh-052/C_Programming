#include <stdio.h>
#include <math.h>
int main()
{	
	int a,b,power,mul,add,sub,div,i;
	printf("Enter 1st number:");
	scanf("%d",&a);
	printf("Enter 2nd number:");
	scanf("%d",&b);
	printf("1--> Power\n");
	printf("2--> Addition\n"); 
	printf("3--> Subtraction\n");
	printf("4--> Multiplication\n");
	printf("5--> Division\n");
	printf("Select an appropriate option (1 to 5):");
	scanf("%d",&i);
	if (i==1)
	{
		power=pow(a,b);
		printf("POW(%d,%d)=%d",a,b,power);
	}
	else if (i==2)
	{
		add=a+b;
		printf("ADD(%d,%d)=%d",a,b,add);
	}
	else if (i==3)
	{
		sub=a-b;
		printf("SUB%d,%d)=%d",a,b,sub);
	}
	else if (i==4)
	{
		mul=a*b;
		printf("MUL(%d,%d)=%d",a,b,mul);
	}
	else if (i==5)
	{
		div=a/b;
		printf("DIV(%d,%d)=%d",a,b,div);
	}
	else
	{printf("Enter a number in range (1 to 5)");
	}		
return 0;	
}
