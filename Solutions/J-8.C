#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,s,n;
  clrscr ();
  printf ("Enter any value:");
  scanf ("%d", &n);
  for (i=0; i<n; i++)
  {
    for (s=n; s>=i; s--)
    {
	  printf (" ");
    }
      for (j=i; j>=1; j--)
      {
	  printf ("%d", j);
      }
       for (j=2; j<=i; j++)
       {
	  printf ("%d", j);
       }
	  printf ("\n");
  }
 getch ();
}