
#include<constrea.h>
#include<stdlib.h>
#include<stdio.h>

   void design(int , int,int);
   void input(int , int,int);
   void final();

void main()
{
   clrscr();

   design(1 , 1 , 1);
   input(1 , 1, 1);
      final();

   getch();
}

    void input(int p1, int p2 , int f)
    {
	    int num , r;
	    randomize();

	    gotoxy(10 , 25);
	    textcolor(WHITE);
	    cprintf("                                      ");

	    if(f == 1)
	    {
		    gotoxy(10 , 25);
		    textcolor(WHITE);
		 cprintf("Enter any number : ");
		    gotoxy(30 , 25);
		    textcolor(WHITE);
		    scanf("%d",&num);
		    r = random(num)+1;
		    r = (r % 6)+1;

		    gotoxy(10 , 25);
		    textcolor(WHITE);
	   cprintf("Random Number Generated By Computer For You : %d",r);
			 getch();

		     if(p1+r<=100)
		     {
			 p1 = p1 + r;
		     }
	    }
	    else if(f == 2)
	    {
		    r = random(99)+1;
		    r = (r % 6)+1;
		    gotoxy(10 , 25);
		    textcolor(WHITE);
		 cprintf("Random Number Generated By Computer : %d",r);
		      getch();

		     if(p2+r<=100)
		     {
			 p2 = p2 + r;
		     }
	    }

	     design(p1 , p2 , f);
    }

    void design(int p1 , int p2 , int f)
    {
	   int i,j;

	  clrscr();

	  gotoxy(33,2);
	  textcolor(RED);
	  cprintf("SNAKE N LADDER");
	  textcolor(WHITE);

       for(i=3 ; i<24 ; i+=2)
       {
	   for(j=10; j<=70 ; j++)
	   {
		gotoxy(j,i);
		cprintf("_");
	   }
       }

       for(i=5 ; i<24 ; i+=2)
       {
	   for(j=10 ; j<=70 ; j+=6)
	   {
		gotoxy(j,i);
		cprintf("|");
		gotoxy(j,i-1);
		cprintf("|");
	   }
       }
	  int num=100;
	  int flag = 1;

       for(i=5 ; i<24 ; i+=2)
       {
		if(i==5)
		{
		   flag = 1;
		}
		if(i==7)
		{
		   num = 81;
		   flag=0;
		}
		if(i==9)
		{
		   num=80;
		   flag=1;
		}
		if(i==11)
		{
		   num=61;
		   flag=0;
		}
		if(i==13)
		{
		   num=60;
		   flag=1;
		}
		if(i==15)
		{
		   num=41;
		   flag=0;
		}
		if(i==17)
		{  num=40;
		   flag=1;
		}
		if(i==19)
		{
		   num=21;
		   flag=0;
		}
		if(i==21)
		{  num=20;
		   flag=1;
		}
		if(i==23)
		{  num=1;
		   flag=0;
		}

	   for(j=13; j<=70 ; j+=6)
	   {
		 if(num==31 || num==50 || num==51 || num==70 || num==71 || num==59 || num==62 || num==79 || num==82 || num==99)
		 {
		     textcolor(GREEN);
		 }
		 else if(num==66 || num==55 || num==46 || num==35 || num==26 || num==29 || num==32 || num==49 || num==52 || num==12)
		 {
		     textcolor(RED);
		 }
		 else
		 {
		      textcolor(9);
		 }

		gotoxy(j,i-1);
		cprintf("%d",num);

		if(p1 == 66)
		{
		   p1 = 26;
		}
		if(p1 == 56)
		{
		   p1 = 12;
		}
		if(p1 == 31)
		{
		   p1 = 71;
		}
		if(p1 == 59)
		{
		   p1 = 99;
		}

		if(p2 == 66)
		{
		   p2 = 26;
		}
		if(p2 == 56)
		{
		   p2 = 12;
		}
		if(p2 == 31)
		{
		   p2 = 71;
		}
		if(p2 == 59)
		{
		   p2 = 99;
		}

		if(num == p1)
		{
		  gotoxy(j-1,i);
		  textcolor(RED);
		  cprintf("#");
		}
		if(num == p2)
		{
		  gotoxy(j+1,i);
		  textcolor(YELLOW);
		  cprintf("*");
		}

		  if(flag==1)
		  {
		      num--;
		  }
		  if(flag == 0)
		  {
		      num++;
		  }
	   }
       }

		if(p1 == 100)
		{
		    gotoxy(10 , 25);
		    textcolor(WHITE);
		    cprintf(" Congrats Player1 Wins ");
		    getch();
		    final();
		}
		else if(p2 == 100)
		{
		    gotoxy(10 , 25);
		    textcolor(WHITE);
		    cprintf(" Congrats Player2 Wins ");
		    getch();
		    final();
		}
		else
		{
		     if(f == 1)
		     {
			 f = 2;
		     }
		     else if(f == 2)
		     {
			 f = 1;
		     }

		       input(p1,p2,f);
		}
    }

    void final()
    {
	clrscr();

	gotoxy(30,10);
	textcolor(RED);
	cprintf("THANK YOU..!!");
	getch();
	exit(0);
    }