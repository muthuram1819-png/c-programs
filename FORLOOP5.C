#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,sum=0;
clrscr();
printf("Enter n value:");
scanf("%d",&n);
for(i=2;i<=n;i=i+2)
{
 sum=sum+i;
  }
  printf("Sum of even numbers is :%d",sum);
  getch();
  }
