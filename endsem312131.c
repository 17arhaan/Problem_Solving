#include <stdio.h>
int main()
{
    int arr1[99][99],arr2[99][99],arr3[99][99],i,j,r,c;
    printf("Enter the dimensions of matrix: ");
    scanf("%d%d",&r,&c);
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("Enter the element a1[%d][%d]: ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    for (i=0;i<r;i++)
    {
        printf("\n");
        for (j=0;j<c;j++)
        {
            printf("%d\t",arr1[i][j]);
        }
    }
    printf("\n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("Enter the element a2[%d][%d]: ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    for (i=0;i<r;i++)
    {
        printf("\n");
        for (j=0;j<c;j++)
        {
            printf("%d\t",arr2[i][j]);
        }
    }
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            arr3[i][j]=arr3[i][j]+(arr1[i][j]*arr2[i][j]);
        }
    }
    printf("\nThe Final Matrix:-");
    for (i=0;i<r;i++)
    {
        printf("\n");
        for (j=0;j<c;j++)
        {
            printf("%d\t",arr3[i][j]);
        }
    }
}
