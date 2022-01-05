#include<stdio.h>
#include<conio.h>
void main()
{
  int no,c,sum=0;
  clrscr ();
  printf ("enter any number:");
  scanf ("%d", &no);
  while (no>0)
  {
     c=c%10;
     no=no/10;
     sum=sum+c;
  }
   printf ("Sum Of Digit:%d", sum);
  getch ();
}