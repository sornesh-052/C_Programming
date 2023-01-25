#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	printf("enter string : ");
	scanf("%s",&s);
	printf("after reversing : %s",strrev(s));
}
