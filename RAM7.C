#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e;
clrscr();
printf("enter the unit:");
scanf("%d",&a);
if(a<=200)
{
 b=a*3;
printf("rate:%d",b);
}
else if(a<=500)
{
 c=a*4;
 printf("rate:%d",c);
 }
 else if(a<=1000)
 {
 d=a*8;
 printf("rate:%d",d);

 }
 else
 {
 e=a*10;
 printf("rate:%d",e);
 }
getch();
}