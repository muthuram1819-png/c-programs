#include<stdio.h>
#include<conio.h>
void main()
{
int i=2,n;
clrscr();
printf("Enter n value:");
scanf("%d",&n);
print:
printf("%d\n",i);
i=i+2;
if(i<=n)
goto print;
getch();
}