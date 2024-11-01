#include <stdio.h>
int main()
{
      int array1[10][10],i,j,m,n;

        printf("Enter no. of rows :: ");
        scanf("%d", &m);
        printf("\nEnter no. of cols :: ");
        scanf("%d",&n);
        printf("\nEnter values to the matrix :: \n");
       for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
        {
                 printf("\nEnter a[%d][%d] value :: ",i,j);
                 scanf("%d", &array1[i][j]);
        }
    }
}
