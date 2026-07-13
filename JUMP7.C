#include<stdio.h>
#include<conio.h>
void main()
{
int sum=0,i=1,n;
clrscr();
printf("Enter n value:");
scanf("%d",&n);
calculate:
sum=sum+i;
i=i+2;
if(i<=n)
goto calculate;
printf("Sum of even numbers is:%d",sum);
getch();
}