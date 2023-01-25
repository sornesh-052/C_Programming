#include <stdio.h>
int main() {
    int n, Num, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &n);
    Num = n;

    while (Num != 0)
	{
       
        remainder = Num % 10;
        result += remainder * remainder * remainder;
        Num /= 10;
    }
    if (result == n)
        printf("%d is an Armstrong number.", n);
    else
        printf("%d is not an Armstrong number.", n);

}

