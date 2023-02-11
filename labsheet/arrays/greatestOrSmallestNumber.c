#include<stdio.h>

int main() {
    int n;

    printf("Please Enter the Number of Elements in Arr: ");
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++) {
        printf("Please Input Element in A[%d]", i);
        scanf("%d", &arr[i]);
    }

    int small , large;
    small = arr[0];
    large = arr[0];


    for(int i=0; i<n; i++){
        if(arr[i] > large) large = arr[i];
        if(arr[i] < small) small = arr[i];
    }


    printf("The smallest number in the array is %d \n", small );
    printf("The largest number in the array is %d \n", large);

    return 0;
}
