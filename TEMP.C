#include<stdio.h>
#include<conio.h>
   void main()
 {
   float c,f;
   clrscr();
   printf("Enter Temp in Fahrneit\n");
   scanf("%f",&c);
   f=(c*9/5)+32;
   printf("%f\n",f);
   printf("Enter Temp in Calcius\n");
   scanf("%f",&f);
   c=(f-32)*5/9;
   printf("%f\n",c);

 getch();
 }