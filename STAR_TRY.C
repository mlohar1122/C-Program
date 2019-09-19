#include<stdio.h>
#include<conio.h>
  void main()
 {
     int i,j,n;
     clrscr();
     for(i=1;i<=4;i++)
     {
      for(j=1;j<=4-i;j++)
     printf(" ");
       for(n=1;n<=2*i-1;n++)
     printf("*");
     printf("\n");
	 }
   getch();
 }