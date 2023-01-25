#include<stdio.h>
int main()
{
	int k,j,i=1;
	printf("enter table number : ");
	scanf("%d",&k);
	printf("enter ending number : ");
	scanf("%d",&j);
	while(i<=j)
	{
		printf("%d x %d = %d\n",k,i,i*k);
		i++;
	}
	return 0;


}
