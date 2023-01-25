#include <stdio.h>
int main()
{
int Num, rem;
printf("Enter the number : ");
scanf("%d", &Num);
while (Num != 0)
{
rem = Num % 10;
Num /=10;
printf("%d\n",rem);
}
}
