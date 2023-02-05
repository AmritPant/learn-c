#include<stdio.h>

int main(){
    int n;

    printf("Please Enter the number of Elements in Array: ");
    scanf("%d", &n);

    int arr[n];

    //  Taking Input
    for(int i=0; i<n; i++){
        printf("Please Enter A[%d] element: ", i);
        scanf("%d", &arr[i]);
    }

    // Adding
    int sum=0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    float avg = sum/n;

    printf("The sum of array is %d \n", sum);
    printf("The Average of Array is %f", avg);

}
