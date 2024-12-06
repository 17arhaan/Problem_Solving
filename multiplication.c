#include <stdio.h>

int main() {
    int n, k, p;

    printf("Enter n & k: ");
    scanf("%d %d", &n, &k);

    for (int i = 1; i <= n; i++) {      
        printf("\n");
        for (int j = 1; j <= k; j++) {  
            p = i * j;                  
            printf("%d",p);  
            printf("\t");
        }
    }

    return 0;
}
