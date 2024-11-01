#include<stdio.h>
int main()
{
      int m,d,a,s,no1,no2;
      printf("Enter first number:");
      scanf("%d",&no1);
      printf("Enter second number:");
      scanf("%d",&no2);
      m=no1*no2;
      d=no1/no2;
      a=no1+no2;
      s=no1-no2;
      printf("Addition of %d and %d is %d \n",no1,no2,a);
      printf("Substraction of %d and %d is %d \n",no1,no2,s);
      printf("Multiplication of %d and %d is %d \n",no1,no2,m);
      printf("Division of %d and %d is %d \n",no1,no2,d);
      return 0;
}
