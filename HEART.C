#include<stdio.h>
#include<conio.h>
 void main()
 {
   int r,c,p;
   clrscr();
   for(r=0;r<=2;r++)
    {
     for(c=1;c<=17-r;c++)
      {
      if((c>=3-r && c<=6+r )||( c>=10-r && c<=13+r))
      printf("*");
      else
      printf(" ");
     }
    printf("\n");
 }
 for(r=8;r>=1;r--)
  {
   for(c=1;c<=8-r;c++)
    printf(" ");
   for(p=1;p<=2*r-1;p++)
    printf("*");
    printf("\n");
  }
  getch();
 }
