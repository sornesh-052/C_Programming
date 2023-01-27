#include<stdio.h>
int main()
{
	int tot,t,n,s;
	printf("enter total user : ");
	scanf("%d",&tot);
	
	printf("enter teacher user : ");
	scanf("%d",&t);
	n=t/3;
	printf("non teaching : %d\n",n);
	s=tot-(t+n);
	printf("student : %d\n",s);
}
