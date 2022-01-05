#include<stdio.h>
#include<conio.h>
void main()
{
  int i,a,sum=0,no,b=0;
  clrscr ();
  printf ("Enter any Number:");
  scanf ("%d", &no);
  i=no;
  while (no!=0)
  {
      a=no%10;
      b=a*a*a;
      no=no/10;
      sum=sum+b;
  }
  if (i==sum)
	printf ("Yes! It is an Armstrong Number:%d", i);
  else
	printf ("No! It is not an Armstrong Number:%d", i);
 getch ();
}