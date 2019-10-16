#include<stdio.h>
#include<conio.h>
#include<string.h>
 void main()
 {
   int choice,n1,n2,ans,c,n;
   int mob[10],pin[6];
   char name[20],fname[20],mname[20],ad[90];
   int fact=1,i,j,k;
   char ch;
   clrscr();
   printf("Enter Your Choice\n");
   printf("1. Calculator\n");
   printf("2. Factorial\n");
   printf("3. Triangal Print\n");
   printf("4. Form\n");
   scanf("%d",&choice);
 switch(choice)
  {
   case 1: clrscr();
	   printf("Please Enter Choice\n");
	   printf("1. + \n");
	   printf("2. - \n");
	   printf("3. * \n");
	   printf("4. / \n");
	   scanf("%d",&c);
	  switch(c)
	  {
	  case 1: printf("Please Enter Two Number\n");
		    scanf("%d%c%d",&n1,&ch,&n2);
		    printf("%d%c%d",n1+n2,ans);
		    break;
	   case 2: printf("Please Enter Two Number\n");
		    scanf("%d%c%d",&n1,&ch,&n2);
		    printf("%d%c%d",n1-n2,ans);
		    break;
	   case 3: printf("Please Enter Two Number\n");
		    scanf("%d%c%d",&n1,&ch,&n2);
		   printf("%d%c%d",n1*n2,ans);
		    break;
	   case 4: printf("Please Enter Two Number\n");
		   scanf("%d%c%d",&n1,&ch,&n2);
		   printf("%d%c%d",n1/n2,ans);
		    break;
	   }
	     break;
     case 2:
	     clrscr();
	     printf("Enter Number\n");
	     scanf("%d",&n);
	    k: if(n>0)
	       {
		 fact=fact*n;
		 n=n-1;
		 goto k;
		}
		 printf("Fact is %d",fact);
	       break;
     case 3: clrscr();
	     for(i=1;i<=9;i++)
	     {
	      for(j=1;j<=9-i;j++)
	       printf(" ");
	      for(k=1;k<=2*i-1;k++)
	      printf("*");
	      printf("\n");
	     }
	     break;
     case 4: clrscr();
	     printf("Full Name:- ");
	     gets(name);
	     printf("\n");
	     printf("Father Name:- ");
	     gets(fname);
	     printf("\n");
	     printf("Mother Name:- ");
	     gets(mname);
	     printf("\n");
	     printf("Adress:- ");
	     gets(ad);
	     printf("\n");
	     printf("Mobile N.:- ");
	     gets(mob);
	     printf("\n");
	     printf("Pin:- ");
	     gets(pin);
			  puts(name);
			  puts(fname);
			  puts(mname);
			  puts(ad);
			  puts(mob);
			  puts(pin);
	     break;
  }
  getch();
 }