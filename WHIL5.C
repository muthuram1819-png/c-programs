#include<stdio.h>
#include<conio.h>
void main()
{
 int x,n,i,sum=0;
 clrscr();
 printf("Enter the number:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 x=i*i;
  sum=sum+x;
 }
 printf("%d",sum);
 getch();
 }