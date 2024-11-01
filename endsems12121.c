#include <stdio.h>
int main()
{
 int m,n,arr1[99][99],arr2[99][99],i,j;
 printf("Enter the value of M : ");
 scanf("%d",&m);
 printf("Enter the value of N : ");
 scanf("%d",&n);
 for(i=0;i<m;i++)
 {
     for(j=0;j<n;j++)
     {
         printf("Enter the element : ");
         scanf("%d",&arr1[i][j]);
     }
 }
 for(i=0;i<m;i++)
 {
     for(j=0;j<n;j++)
     {
         printf("Enter the element : ");
         scanf("%d",&arr2[i][j]);
     }
 }
 for(i=0;i<m;i++)
 {
     for(j=0;j<n;j++)
     {

         printf("%d",arr1[i][j]);
     }
     printf("\n");
 }
 for(int i=0;i<m;i++)
 {
     for(int j=0;j<n;j++)
     {

         scanf("%d",arr2[i][j]);
     }
     printf("\n");
 }
 return 0;
}
