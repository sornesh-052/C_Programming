#include<stdio.h>
int main()
{
	
int i,j,date,month,year,c=0;

    printf("Enter date (dd/mm/yy): ");
    scanf("%d/%d/%f", &date,&month,&year);
    
	if(date<=0 || date>=32){
		printf("Invalid input...");
	}
	else if(month<=0 || month>=13){
		printf("invalid input...");
	}
	else if(year<0){
		printf("invalid input..");
	}
	else{
		if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   }
   else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
   }
   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }
   else {
      printf("%d is not a leap year.", year);
	}
}
}
