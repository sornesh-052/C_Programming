#include<stdio.h>
int main()
{
	int n,a=0,b=1,c;
	printf("enter the limit = ");
	scanf("%d",&n);
	//printf("%d\n",a);
	//printf("%d\n",b);
	while(c<=n)
	{ 
		c = a+b;
	    a = b;
	    b=c;
	    printf("%d\n",c);
	}

}
