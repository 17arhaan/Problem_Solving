#include<stdio.h>
int main()
{
  int arr[50],sum,i,e;
  printf("Enter the limit of array: ");
  scanf("%d",&e);
  for (i=0;i<e;i++)
  {
      printf("Enter the elements: ");
      scanf("%d",&arr[i]);
  }
  for (arr[i];i>=0;i--)
  {
      printf("%d",arr[i]);
  }
}
