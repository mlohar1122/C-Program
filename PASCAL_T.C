#include<stdio.h>
#include<conio.h>
   void main()
 {
   int i,j,k,n;
   clrscr();
   printf("please Enter Number of Rows\n");
   scanf("%d",&n);
 for(i=0;i<=n;i++)
 {
   for(j=0;j<=i;j++)
   printf("*");
 printf("\n");
 }
  for(i=n;i>=1;i--)
 {
   for(j=1;j<=i;j++)
   printf("*");
 printf("\n");
 }
  getch();
 }