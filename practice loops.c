#include <stdio.h>
int main ()
{
   int odd,even,a,b,c;
   printf("Enter the first number: ");
   scanf("%d",&a);
   printf("Enter the second number: ");
   scanf("%d",&b);
   printf("Enter the third number: ");
   scanf("%d",&c);
   if ((a>b)&&(a>c))
   {
         printf("%d is largest",a);
   }
  if ((a<b)&&(b>c))
   {
         printf("%d is largest",b);
   }
   else
      printf("%d is largest",c);
   return 0;
}

