#include <stdio.h>
int main()
{
      int a[]={1,2,3,4,5},b[99],sum,no1,no2;
      printf("Enter first index:");
      scanf("%d",&no1);
      printf("Enter second index:");
      scanf("%d",&no2);
      sum = a[no1] + a[no2];
      b[0]=sum;
      printf("%d",b[0]);
      return 0;
}
