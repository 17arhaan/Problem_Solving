#include <stdio.h>
int main()
{
      int n,i,j,arr[50];
      printf ("Enter the value of n:");
      scanf ("%d",&n);
      for (i=0;i<n;i++)
      {
            scanf("%d",&arr[i]);
      }
      for (j=0;j<n;j++)
      {
            printf("%d \n",&arr[i]);
      }
      return 0;
}
