#include<stdio.h>
#include<conio.h>
void main()
{
int i=1,n;
clrscr();
printf("Enter n value:");
scanf("%d\n",&n);
print:
printf("%d",i);
i=i+2;
if(i<=n)
goto print;
getch();
}