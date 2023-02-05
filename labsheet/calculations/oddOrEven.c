#include<stdio.h>


int main() {
    int n;

    // Taking Number
    printf("Please Input the Number: ");
    scanf("%d", &n);

    // Taking Reminder
    int rem = n % 2;

    // Checking Remainder
    if(rem == 0) {
    printf("Even Number");
    }  else {
        printf("Odd Number");
    }
}
