#include<stdio.h>
#include<conio.h>
void main()
{
int a,x;
clrscr();
printf("Enter the number:");
scanf("%d",&a);
x=(a%7==0)&&(a%5==0) ? "divisible by both":((a%7==0) ? "divisible by 7":((a%5==0) ? "divisible by 5":"not divible by 5 and 7"));
printf("%s",x);
getch();
}






