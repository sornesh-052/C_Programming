#include<stdio.h>
int main()
{
	int n,i=1,f=1;
	printf("enter value = ");
	scanf("%d",&n);
	while(i<=n)
	{
		f=f*i;
		//i+=1;
	}
	printf("the fac is %d",f);
	
}
