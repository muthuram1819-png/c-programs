#include<stdio.h>
#include<conio.h>
enum day
{
MON=1,TUE,WED,THU,FRI,SAT,SUN};
void main()
{
enum day today=THU;
clrscr();
switch(today)
{
case 1:
printf("Today is Monday");
break;
case 2:
printf("Today is Tuesday");
break;
case 3:
printf("Today is wednesday");
break;
case 4:
printf("Today is Thursday");
break;
case 5:
printf("Today is Friday");
break;
case 6:
printf("Today is saturday");
break;
default:
printf("Today is sunday");

}
getch();
}
