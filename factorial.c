#include <stdio.h>
int Fact (int num){
    int factt = 1;
    for (int i = 1; i <= num; i++){
        factt *= i;
    }
    return factt;
}
int main(){
    int num;
    printf("Enter Number : ");
    scanf("%d",&num);
    int result = Fact(num);
    printf("Factorial of %d: %d\n", num, result);
    return 0;
}