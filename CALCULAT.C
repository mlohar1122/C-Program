#include<stdio.h>
#include<conio.h>
 void main()
 {
    int a;
    clrscr();
    printf("Enter Any Number\n");
    scanf("%d",&a);
    if((a<1)||(a>7))
    {
      printf("Wrong Number Enterd\n");
      printf("Renter Value 1-7\n");
      scanf("%d",&a);
      }
      else
      {
	if((a>7)||(a%==4))

      }

    else
      { if(a==1)
	 printf("Sunday");
       else
       { if(a==2)
	 printf("Monday");
       else
       { if(a==3)
	 printf("Tuesday");
       else
       { if(a==4)
	 printf("Wednesday");
       else
       { if(a==5)
	 printf("Thersday");
       else
       { if(a==6)
	 printf("Friday");
	 else
	 { if(a==7)
	   printf("Saturday");
	 }
	}
       }
     }
   }
  }
  }
    getch();
 }