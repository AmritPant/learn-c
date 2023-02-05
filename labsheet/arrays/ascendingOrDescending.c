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

    printf("First Element: %d \n", arr[0]);

    // Rearraging the Order
  

    printf("\n First Element After Ascending: %d", arr[0]);
 return 0;
}
