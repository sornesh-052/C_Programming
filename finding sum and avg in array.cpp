#include<stdio.h>
int main()
{
	int a[10],n,i,avg=0,sum=0;
	printf("enter no of elemets : ");
	scanf("%d",&n);
	printf("enter values \n ");
	for (i=1;i<=n;i++)
	{
		
		scanf("%d",&a[i]);
	}
	for (i=1;i<=n;i++)
	{
		sum+=a[i];
		avg=sum/n;
		
	}
printf("\nsum : %d",sum);
printf("\naverage : %d",avg);
return 0;
}
