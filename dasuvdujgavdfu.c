#include<stdio.h>
int main()
{
    int arr1[99],arr2[99],sum[99],i,n,m;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Enter the elements arr1[%d]: ",i);
        scanf("%d",&arr1[i]);
    }
    printf("Enter the number of elements: ");
    scanf("%d",&m);
    for (i=0;i<m;i++)
    {
        printf("Enter the elements arr2[%d]: ",i);
        scanf("%d",&arr2[i]);
    }
    for (i=0;i<m;i++)
    {
        printf("%d",arr2[i]);
    }
    printf("\n");
    for (i=0;i<n;i++)
    {
        printf("%d",arr1[i]);
    }
    for (i=0;i<m;i++)
    {
        sum[i]=arr1[i]+arr2[i];
    }
    printf("\n");
    for (i=0;i<m;i++)
    {
        printf("%d",sum[i]);
    }
 return 0;

}
