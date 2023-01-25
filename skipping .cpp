#include <stdio.h>
int main()
{
	int a,b,c,rem;
	printf("Enter a number to start:");
	scanf("%d",&a);
	printf("Enter a number to end:");
	scanf("%d",&b);
	printf("Enter a number:");
	scanf("%d",&c);
	while (a<=b)
	{
	rem=a%10;
	if (rem!=c)
	printf("%d,",a);
	a=a+1;
}
	
	
}
