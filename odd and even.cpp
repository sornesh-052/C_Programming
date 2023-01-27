#include<stdio.h>
int main()
{
	int n1,n2,r,i;
	printf("enter starting number : ");
	scanf("%d",&n1);
	printf("enter ending number : ");
	scanf("%d",&n2);
	printf("\n\nDisplay the even numbers between %d and %d are: ",n1,n2);
	for(i=n1; i<=n2; i++){
        r=i%2;
        if(r==0)
            printf("\n %d",i);
    }

    printf("\n\nDisplay the odd numbers between %d and %d are: ",n1,n2);

    for(i=n1; i<=n2; i++){
        r=i%2;
        if(r==1)
            printf("\n %d",i);
    }
    
    return 0;
}
