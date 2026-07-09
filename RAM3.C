#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,x,y;
clrscr();
printf("Enter 3 values:");
scanf("%d%d%d",&a,&b,&c);
x=a>b ? a:b;
y=x>c ? x:c;
printf("Greatest of three number is:%d",y);
getch();
}