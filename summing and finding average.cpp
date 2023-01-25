#include<stdio.h>
int main()
{
	int i,n,sum=0,avg;
	
	printf("enter limit = ");
	scanf("%d",&n);
	for (i;i<=n;i++)
	{
		sum+=i;
	}
	printf("sum = %d\n",sum);
	avg=sum/n;
	printf("average = %d\n",avg);
	
}
