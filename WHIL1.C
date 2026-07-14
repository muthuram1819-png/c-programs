#include<stdio.h>
#include<conio.h>
void main()
{
int n,dig=0,arm=0,rem,temp,i,x;
clrscr();
printf("Enter n value:");
scanf("%d",&n);
temp=n;
while(temp>0)
{
 temp=temp/10;
 dig++;
 }
 temp=n;
 while(temp>0)
 {
  rem=temp%10;
  x=1;
  for(i=1;i<=dig;i++)
  {
   x=x*rem;
   }
   arm=arm+x;
   temp=temp/10;

   }
   if(arm==n)
   printf("Amstrong number");
   else
   printf("Non Amstrong number");
   getch();
   }