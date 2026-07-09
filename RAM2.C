#include<stdio.h>
#include<conio.h>
void main()
{
int r;
float n;
clrscr();
printf("Enter the radius of circle:");
scanf("%d",&r);
n=2*3.14f*r;
printf("Circumference of circle:%f",n);
getch();
}