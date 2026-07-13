#include<stdio.h>
#include<conio.h>
 enum day
 {
 MON=1,
 TUE,
 WED,
 THU,
 FRI,
 SAT,
 SUN,
 };
  void main()
  {

  enum day today=MON;
  clrscr();
  printf("%d",today);
  getch();
  }