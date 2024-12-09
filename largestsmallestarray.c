#include<stdio.h>
#define max 99
int main(){
    int arr[max];
    int n;
    printf("Enter Number of Elements : ");
    scanf("%d",&n);
    for (int i = 0 ; i < n ; i++){
        printf("Enter Element [%d] : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Array ----> ");
    for (int i = 0 ; i < n ; i++){
        printf("%d  ",arr[i]);
    }
    int largest = arr[0]; 
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    printf("\nLargest Element ----> %d\n",largest);
    int smallest = arr[0];
    for (int i = 0;i < n; i++){
        if (arr[i] < smallest){
            smallest = arr[i];
        }
    printf("\nSmallest Element ----> %d\n",smallest);
    return 0;
    }
}
 
