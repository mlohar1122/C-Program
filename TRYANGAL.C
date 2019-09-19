#include<stdio.h>
#include<conio.h>
  void main()
 {
     int r,b,s,n;
     clrscr();
     printf("Please Enter No of rows\n");
     scanf("%d",&n);
     for(r=n;r>=1;r--)
     {
      for(b=1;b<=n-r;b++)
     printf(" ");
       for(s=1;s<=2*r-1;s++)
     printf("*");
     printf("\n");
	 }
   getch();
 }