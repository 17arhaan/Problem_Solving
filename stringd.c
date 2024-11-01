#include<stdio.h>
int main ()
{
    char sexy[99];
    int ctr,i;
    printf("Enter the string: ");
    gets(sexy);
    for (i=0;sexy[i]!='\0';i++)
    {
       if(sexy[i]==' '|| sexy[i+1]=='\0')
       {
           ctr++;
       }
    }
    printf("\nWords: %d",ctr);
return 0;
}
