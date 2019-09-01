#include<stdio.h>
#include<conio.h>
  void main()
  {
    int d,m,y,div,rem,january,march;
    clrscr();
    printf("Enter Your Date");
    scanf("%d%d%d",&d,&m,&y);
  {  if(january==31)

     d++;
     div=d/31;
     rem=d%31;
     m=m+div;
     d=d%31;
    }
  { if(march==30)

     d++;
     div=d/30;
     rem=d%30;
     m=m+div;
     d=d%30;
     d++;
     printf("%d %d %d",d,m,y);
   }
    getch();
    }








