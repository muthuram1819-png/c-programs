#include<stdio.h>
#include<conio.h>
void main()
{
int fact=1,i=1,n;
clrscr();
printf("Enter the number:");
scanf("%d",&n);
calculate:
fact=fact*i;
i++;
if(i<=n)
goto calculate;
printf("factorial of number is:%d",fact);
getch();
}
