#include <stdio.h>
int main()
{
    int n,arr[99],sum=0;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the elements : ");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);

    }
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);

return 0;
}
