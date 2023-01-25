#include<stdio.h>
int main() {
   int x, y, temp;
   printf("Enter the value of x and y: ");
   scanf("%d %d", &x, &y);
   printf("Before swapping x=%d, y=%d \n", x, y);
   temp = x;
   x = y;
   y = temp;
   printf("After swapping x=%d, y=%d\n", x, y);
}
