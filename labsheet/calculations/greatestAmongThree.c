#include<stdio.h>


int main() {
    // Taking Number
    int a,b,c;

    // First Number
    printf("Please Input the first Number(A): ");
    scanf("%d", &a);

    
    // Second Number
    printf("\n Please Input Second Number(B): ");
    scanf("%d", &b);

    // Third Number
    printf("\n Please Input Third Number(C): ");
    scanf("%d", &c);


    // Checking the Number
    if(a>b && a>c) {
        printf("First Number i.e A is greatest Number");
    } else if(b>a && b>c) {
        printf("Second Number i.e B is greatest Number");
    } else {
        printf("Third Number i.e C is greatest Number");
    }
}
