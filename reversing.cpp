#include <stdio.h>
int main()
{
int Num, rev_Num = 0, rem;
printf("Enter the number to reverse: ");
scanf("%d", &Num);
while (Num != 0)
{
rem = Num % 10;
rev_Num = rev_Num * 10 + rem;
Num /=10;
}
printf("The reversed number is: %d", rev_Num);

}

