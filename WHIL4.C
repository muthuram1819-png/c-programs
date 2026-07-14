
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,x=10;
long int result=1,h,sum=0;
clrscr();
printf("Enter the n value:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
result=result*x;
h=result-1;
sum=sum+h;
}
printf("%ld",sum);
getch();
}



