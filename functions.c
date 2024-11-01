#include <stdio.h>
int g=99; /* global variable declaration */
int func(void)
{
      printf("%d \n",g);
      func();
      return 0;
}
int main () {
  int a, b; /* local variable declaration */
  a = 10; b = 20;g=a+b;
  printf ("value of a = %d, b = %d and g = %d\n", a, b, g);
  func();
  return 0;
 }
