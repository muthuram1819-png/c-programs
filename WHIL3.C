#include<stdio.h>
#include<conio.h>
void main()
{
int n,rem,temp,sod=0;
clrscr();
printf("Enter the number:");
scanf("%d",&n);
temp=n;
while(temp>0)
{
     rem=temp%10;
     sod=sod+rem;
     temp=temp/10;
     }
     printf("Sum of digits is:%d",sod);
     getch();
     }