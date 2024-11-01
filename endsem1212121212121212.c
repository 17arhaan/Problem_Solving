#include<stdio.h>
int main()
{
    int arr1[100][100],arr2[100][100],arr3[100][100],r,c,i,j;
    printf("Enter the dimensions for matrix: ");
    scanf("%d%d",&r,&c);

    for(i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter the elements a1[%d][%d]:",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        printf("\n");
        for(j=0;j<c;j++)
        {
            printf("%d\t",arr1[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter the elements a2[%d][%d]:",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        printf("\n");
        for(j=0;j<c;j++)
        {
            printf("%d\t",arr2[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        arr3[i][j]=arr3[i][j]+(arr1[i][j]*arr2[i][j]);
    }
    printf("\nThe Final Matrix :-");
     for(i=0;i<r;i++)
    {
        printf("\n");
        for(j=0;j<c;j++)
        {
            printf("%d\t",arr3[i][j]);
        }
    }
return 0;
}
