#include <stdio.h>
int main()
{
	float age,a;
	printf("ENTER YOUR AGE : ");
	scanf("%f",&age);
	if(age>=18)
	printf("YOU CAN VOTE");
	else if (age<=0)
	printf("YOU ARE NOT EXISTS");
	else{
	
	printf("YOU CANNOT VOTE\n");
	a=18-age;
	printf("YOU SHOULD WAIT %f YEARS ",a);
}
	}
