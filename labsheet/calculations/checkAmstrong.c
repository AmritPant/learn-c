#include<stdio.h>


int main() {
    int n,sum=0;

    printf("Please Enter a Number: ");
    scanf("%d", &n);

    int temp = n;

    while(n != 0 ) {
        int lastDigit = n % 10;
        sum += lastDigit*lastDigit*lastDigit;
        n = n/10;
    }

    if(sum == temp) {
        printf("Amstrong");
    } else {
        printf("Not Amstrong");
    }
   
}
