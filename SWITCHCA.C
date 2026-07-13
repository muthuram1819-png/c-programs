#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e;
clrscr();
printf("Enter the unit:");
scanf("%d",&a);
switch(a<201 ? 1:(a<501 ? 2:(a<1001 ? 3:4)))
{
case 1:
b=a*3;
printf("rate:%d",b);
break;
case 2:
c=a*4;
printf("rate:%d",c);
break;
case 3:
d=a*8;
printf("rate:%d",d);
break;
default:
e=a*10;
printf("rate:%d",e);
	 }
	 getch();
	 }