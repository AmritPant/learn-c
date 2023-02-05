#include<stdio.h>


int main() {
    // Taking Input
    int n;
    printf("Please Input a Number: ");
    scanf("%d", &n);

    if(n > 0) {
        printf("Positive Number");
    } else if (n<0) {
        printf("Negative Number");
    } else {
        printf("Your Number is Zero i.e Niether Positive nor Negativj");
    }
 
    return 0;

}
