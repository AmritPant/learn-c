#include<stdio.h>


int main() {
    int n;

    printf("Please Enter the value of n: ");
    scanf("%d", &n);

    // Checking for 1 
    if(n == 1) {
    printf("1 is neither nor composite");
    return 0;
    } 

    // Looping Over the Number 
    for(int i=2; i<n; i++) { // 
        int rem = n % i;

        if(rem == 0 ) {
            printf("Composite Number");
            return 0; // Returing from the Function in the case of match
        }
    }

    printf("Prime Number");

    return 0;
}
