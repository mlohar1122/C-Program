#include<stdio.h>
#include<conio.h>
  void main()
 {
    int n,r,x=0;
    clrscr();
    printf("Enter Number to Reverce\n");
    scanf("%d",&n);
  l10:
    if(n!=0)
    {
     r=n%10;
     n=n/10;
     x=x*10+r;
     goto l10;
    }
    printf("%d",x);
  getch();
 }