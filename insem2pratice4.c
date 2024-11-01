#include <stdio.h>
int main ()
{
      int arr[50],i,n;
      printf("Enter number of elements: ");
      scanf("%d",&n);
      printf ("Enter the values: \n");
      for (i=0;i<n;i++)
            {
                  scanf("%d",&arr[i]);
            }
      printf ("The values are: \n");
      for (i=0;i<n;i++)
      {
            printf("%d \n",arr[i]);
      }
      return 0;
}
