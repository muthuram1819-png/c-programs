#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=1,sum=0;
clrscr();
printf("Enter n value:");
scanf("%d",&n);
calculate:
sum=sum+i;
i++;
if(i<=n)
goto calculate;
printf("%d",sum);
getch();
}