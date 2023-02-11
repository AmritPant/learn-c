#include<stdio.h>

int main () {
    int mode;
    
    // Deceding the mode
    printf("1: Ascending\n");
    printf("1: Dscending\n");
    printf("Please Enter Mode(1/2): ");
    scanf("%d", &mode);

    // Taking the value of array
    int n;
    printf("\n Please Enter the Number of Elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Please input the value at arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

 printf("Your Given Array is ");  
    for(int i = 0; i < n; i++){
        printf("%d,", arr[i]);  
    }  
    for(int i=0; i<n; i++ ){
        for(int j=i+1; j<n; j++){

            if(mode == 1) {
            if(arr[i] > arr[j] ) {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            } 
            } else if (mode == 2) {
            if(arr[i] < arr[j] ) {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            } 
 
            }

       }
    }

        printf("\n");  
        printf("Your Sorted Array is ");  
    for(int i = 0; i < n; i++){
        printf("%d,", arr[i]);  
    }

  return 0;
}
