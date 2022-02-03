#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,n;
 clrscr ();
  printf ("Enter nay number:");
  scanf ("%d", &n);
 for (i=n; i>=0; i--)
 {
   for (j=1; j<=i; j++)
   {
      printf ("*");
   }
      printf ("\n");
 }

getch ();
}
