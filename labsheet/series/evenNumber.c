//  0,2,4,6,8,10,12....................


#include<stdio.h>


int main() {
    int n;

    // Taking Input
    printf("Please Enter the Number of Elements: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        printf("%d,", i*2);
    }

    return 0;
}
