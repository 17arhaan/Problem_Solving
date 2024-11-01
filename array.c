#include <stdio.h>
int main()
{
      int a[99], i, n,e,j;
      printf("Enter the limit of array : ");
      scanf("%d",&n);
      for (i=0;i<n;i++)
      {
            printf("Enter the number to be entered : ");
            scanf("%d",&e);
            a[i]=e;
      }
      for (j=0;j<n;j++)
      {
            printf("%d \n",a[j]);
      }

return 0;
}

