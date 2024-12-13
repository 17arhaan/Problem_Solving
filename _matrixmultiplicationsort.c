#include<stdio.h>
int main(){
    int r1,c1,r2,c2;
    int res[99][99];
    printf("\tMatrix 1 --->\n");
    printf("Enter the number of rows : ");
    scanf("%d", &r1);
    printf("Enter the number of cols : ");
    scanf("%d", &c1);

    int mat1[r1][c1];
    printf("Enter Elements --->\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("\tMatrix 2 --->\n");
    printf("Enter the number of rows : ");
    scanf("%d", &r2);
    printf("Enter the number of cols : ");
    scanf("%d", &c2);

    int mat2[100][100];
    printf("Enter Elements --->\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    printf("\n");
    printf("\nMatrix 1 :\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("%d\t", mat1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\nMatrix 2 :\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\nMultiplied Matrix --->\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            res [i][j] = 0;
            for (int k = 0 ; k <c1 ; k++){
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
        printf("%d\t", res[i][j]);
    }
    printf("\n");
    }
}