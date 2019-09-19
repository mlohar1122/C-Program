#include<stdio.h>
#include<conio.h>
 void main()
 {
   int n,x,count=0,r;
   clrscr();
   printf("Enter number\n");
   scanf("%d",&n);
   printf("Enter value which you want to cheak\n");
   scanf("%d",&x);
 l10: if(n!=0)
  {
    r=n%10;
    n=n/10;
   if(r==x)
    count=count+1;
   goto l10;
   }
    printf("%d",count);
    getch();
 }