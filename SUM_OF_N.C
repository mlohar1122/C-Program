#include<stdio.h>
#include<conio.h>
  void main()
 {
     int  sum,n,i;
     clrscr();
     printf("Enter number to sum\n");
     scanf("%d",&n);
     i=1;
     sum=0;
    while(i<=n)
     {

	 sum=sum+i;
	 i++;
     }
       printf("%d",sum);


   getch();
 }