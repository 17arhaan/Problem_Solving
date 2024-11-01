#include<stdio.h>
int main()
{
    int arr[99],flag=0,n,key,i;
    printf("Enter the limit of array:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Enter the elements: ");
        scanf("%d",&arr[i]);
    }
    printf("Array: ");
    for (i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n Enter the number to find in the array: ");
    scanf("%d",&key);
    for (i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            flag=1;
        }
    }
    if (flag==1)
    {
      printf("Found: %d",key);
    }
    else
    {
        printf("Not Found");
    }
    return 0;
}
