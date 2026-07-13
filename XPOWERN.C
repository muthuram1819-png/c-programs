#include<stdio.h>
#include<conio.h>
void main()
{
int i=1,n,x,power=1;
clrscr();
printf("enter the x value:");
scanf("%d",&x);
printf("enter the n value:");
scanf("%d",&n);
calculate:
     power=power*i;
     printf("%d^%d=%d\n",x,i,power);
     i++;
     goto calculate;

     getch();
     }