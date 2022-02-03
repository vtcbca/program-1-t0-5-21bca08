#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],i,j,t;
 clrscr ();
 for (i=0; i<10; i++)
 {
   printf ("Array a[%d]:", i);
   scanf ("%d", &a[i]);
 }
  for (i=0; i<10; i++)
  {
    for (j=0; j<10; j++)
    {
      if (a[j]>a[j+1])
      {
	 t=a[j];
	 a[j]=a[j+1];
	 a[j+1]=t;
      }
    }
  }
   for (i=0; i<10; i++)
   {
     printf ("\n%d", a[i]);
   }
 getch ();
}