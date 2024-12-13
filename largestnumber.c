#include<stdio.h>
#define max 99
int Largest(int arr[max], int n) {
    int largest = arr[0]; 
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}
void printArray(int arr[max],int n){
    for (int i = 0 ; i < n ; i++){
        printf("%d  ",arr[i]);
    }
}
int main(){
    int arr[max];
    int n;
    printf("Enter Number of Elements : ");
    scanf("%d",&n);
    for (int i = 0 ; i < n ; i++){
        printf("Enter Element [%d] : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Numbers ----> ");
    printArray(arr,n);
    int result = Largest(arr,n);
    printf("\nLargest Number Amongst : %d",result);
    return 0;
}

 
