#include <stdio.h>
int main()
{
int Num, sum = 0, rem;
printf("Enter the numbers: ");
scanf("%d", &Num);
while (Num != 0)
{
rem = Num % 10;
Num /=10;
sum=sum+rem;
}
printf("%d",sum);
return 0;
}
