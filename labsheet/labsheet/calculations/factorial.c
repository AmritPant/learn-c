#include<stdio.h>


int main() {
    int n,fact =1;

    printf("Please Input the Number: ");
    scanf("%d", &n);

    for(int i=n; i >=1; i--) {
        fact = fact * i; 
    }

    printf("Your Factorial is %d", fact);
}
