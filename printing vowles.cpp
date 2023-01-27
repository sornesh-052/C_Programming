#include<stdio.h>
#include<string.h>
main()
{
char str[100];
int a,vowel,i;
printf("Enter a string:");
scanf("%[^\n]s",&str);
vowel=0;

a=strlen(str);
for(i=0; i<a; i++)
    {
    if(str[i] =='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || 
               str[i] =='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'  )
               {
			   vowel++;
           }
            
    }printf("\nTotal number of vowel = %d\n", vowel);}
