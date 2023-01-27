#include<stdio.h>    
int main(){  
int a[10][10],sum,r,c,i,j,k;    
  
printf("enter the number of row=");    
scanf("%d",&r);    
printf("enter the number of column=");    
scanf("%d",&c);    
printf("enter the first matrix element=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
scanf("%d",&a[i][j]);    
}    
}  
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
if (i==j)
{
	sum+=a[i][j];
}}}
printf("sum = %d",sum);}
