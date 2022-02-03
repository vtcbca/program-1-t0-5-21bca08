#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 int i,count=0;
 char s[40];
 clrscr ();
 printf ("Enter any string:");
 gets(s);
 for (i=0; i<strlen(s); i++)
  {
     if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
       {
	  count++;
	  printf ("%c", s[i]);
       }
  }
   printf ("\nnumber of vowel:%d", count);
 getch ();

}