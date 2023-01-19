#include <stdio.h>


int main()
{
    int mode = 1; // a = "aceding" , "d" = "decending";
    int n;
    printf("Please Enter which mode you want Accending or Decending(1/2): ");
    scanf("%d", &mode);

    if(mode != 1 && mode != 2) {
        printf("Please Provide the correct value of mode which should be 1 or 2!");
    }

    printf("Please Number of elements you want in this array ");
    scanf("%d", &n);


    if(n < 1) printf("Please Provide Appropriate Value for an array");

    int arr[n];

    printf("Please Enter the number of elements \n");
    
    for(int i = 0; i < n; i++){
        printf("Please Enter value of a[%d]\t", i);
        scanf("%d", &arr[i]);
        printf(" \n");
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
