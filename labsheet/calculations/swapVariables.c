#include<stdio.h>

int main() {
    int a,b;
    int temp;

    printf("Please Enter the First Varibles (A): ");
    scanf("%d", &a);

    printf("Please Enter the Second Variable (B): ");
    scanf("%d", &b);


    printf("Your Inital Variable A=%d and B=%d \n", a,b);
    // swaping the variables
    temp = a;
    a = b;
    b = temp;
    printf("Your swaped Variables are A=%d and B=%d", a,b);

    return 0;
}
