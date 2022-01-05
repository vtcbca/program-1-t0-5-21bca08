#include<stdio.h>
#include<conio.h>
void main()
{
   int no,c=0,i=2;
   clrscr ();
   printf ("Enter Any Number:");
   scanf ("%d", &no);
   while (i<no)
   {
	if (no%i==0)
	{
	  c=1;
	  break;
	}
	  i=i+1;
   }
     if (c==1)
     {
	printf ("Not A Prime Number:%d", no);
     }
     else
     {
       printf ("Prime Number:%d", no);
     }
 getch ();
}

