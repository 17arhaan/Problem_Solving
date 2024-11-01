#include <stdio.h>
int main()
{
    int arr[50],i,e,sum;
    printf("Enter the number of elements: ");
    scanf("%d",&e);
    for(i=0;i<e;i++)
    {
        printf("Enter the elements: ");
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<e;j++)
    {
        printf("%d",arr[j]);
    }
    for(int k=0;k<e;k++)
    {
        sum = sum+arr[k];
    }
    printf("\n %d",sum);
return 0;
}

