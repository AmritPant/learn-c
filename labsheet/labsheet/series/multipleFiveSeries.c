// 1,5,10,15,20

#include<stdio.h>

int main() {

    int n;

    // Taking Input
    printf("Please enter the number of elements: ");
    scanf("%d", &n);

    // Printing the initial Value
    printf("1,");

    //loop
    for(int i=1; i<n; i++) {
        printf("%d,", i*5);
    }

    return 0;
}
