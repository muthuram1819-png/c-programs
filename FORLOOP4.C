#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,x;
clrscr();
printf("Enter x value:");
scanf("%d",&x);
printf("Enter n value:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 printf("%d*%d=%d\n",i,x,i*x);
  }
  getch();
  }