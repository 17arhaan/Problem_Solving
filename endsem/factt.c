#include <stdio.h>
int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    return num * factorial(num - 1);
}
int main(){
    int num;
    printf("Enter Number : ");
    scanf("%d",&num);
    int result = factorial(num);
    printf("Factorial of %d: %d\n", num, result);
    return 0;
}