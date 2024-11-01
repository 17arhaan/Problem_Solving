#include<stdio.h>
int main()
{
    int arr1[3][3],arr2[3][3],mul,i,j;
    printf("Enter the elements for matrix 1: \n");
    for (int i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("The Matrix 1 is: ");
    for (i=0;i<3;i++)
    {
        printf("\n");
        for (j=0;j<3;j++)
        {
           printf("%d \t",arr1[i][j]);
        }
    }
   printf("\n Enter the elements for matrix 2: \n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("The Matrix 2 is: ");
    for (i=0;i<3;i++)
    {
        printf("\n");
        for (j=0;j<3;j++)
        {
           printf("%d \t",arr2[i][j]);
        }
    }
    mul ==
  printf("Final Matrix : %d",mul);
 return 0;
}
