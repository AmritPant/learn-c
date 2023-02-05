// 0,1,1,2,3,5,8,13,21.................


#include<stdio.h>

int main() {
    int n;
    int a=0,b=1;

    // Taking Input
    printf("Please Enter the Number of Elements: ");
    scanf("%d", &n);

    // Printing the values
    printf("0,1,");


    for(int i=1; i<n; i++){
        int c = a+b;
        printf("%d,", c);
        a=b;
        b=c;
    }
    
}
