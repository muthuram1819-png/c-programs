#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,digit=0;
clrscr();
printf("Enter the number:");
scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
     if(n%i==0)
     digit++;
     }
     if(digit==2)
     printf("Prime number");
     else
     printf("Not prime");

     getch();
     }