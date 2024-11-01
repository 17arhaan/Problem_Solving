// Palindrome //
#include<stdio.h>
int main()
{
 char pld[4]="mom";
 puts(pld);
 for (int i=0;pld[i]!='\0';i++)
 {
     for (int j=2;j<=0;j--)
     {
        if ( pld[i] == pld[j] )
        {
           printf("It is a palindrome");
        }
        else
        {
           printf("It is not a palindrome");
        }
     }
 }
 return 0;
}


