#include <stdio.h>
int main()
{
      int array1[10][10],i,j,r,c;
      printf("Enter no. of rows : ");
      scanf("%d",&r);
      printf("Enter the no. of coloums : ");
      scanf("%d",&c);
      for (i = 0; i < r; i++)
      {
            for (j = 0; j < c; j++)
         {
                 printf("Enter values %d%d : ",i,j );
                 scanf("%d", &array1[i][j] );
         }

      }
      printf("The given matrix is \n");
           for (i = 0; i < m; ++i)
        {
           for (j = 0; j < n; ++j)
        {
            printf("\t%d", array1[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}

