#include<stdio.h>
#include<conio.h>
void main()
{
int i=1,n;
clrscr();
printf("Enter the number:");
scanf("%d",&n);
table:
printf("%d*%d=%d\n",i,n,i*n);
i++;
if(i<=10)
goto table;
getch();
}
